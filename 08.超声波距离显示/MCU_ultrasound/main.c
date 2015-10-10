/********************************* 深圳市航太电子有限公司 *******************************
* 实 验 名 ：温度传感器下位机实验
* 实验说明 ：根据modbus协议，实时同步数据到上位机
* 实验平台 ：航太51单片机开发板 V1.1
* 连接方式 ：
* 注    意 ：
* 作    者 ：航太电子产品研发部    QQ ：1909197536
* 店    铺 ：http://shop120013844.taobao.com/
****************************************************************************************/
#include "REG52.H"
#include "system.h"
#include "modbusRTU.h"
#include "DS18B20.h"
#include <string.h>
#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

sbit Trig = P3^2;//触发IO口
sbit Echo = P3^3;//返回IO口

//全局变量定义
unsigned char status = 0;//程序当前状态，1 发送触发信号，2 等待信号返回,3 
unsigned int dis_count = 0;//脉宽长计时
unsigned char count=0;
int distance = 0;

void ultraSoundInit();

/*******************************************************************************
* 函 数 名 ：main
* 函数功能 ：主函数
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void main()
{
	int i=0;
	 SystemInit();
	 init_MODBUS();
	 ultraSoundInit();
	
	while(1)
	{				
				//将需要交互的数据读取到公共区
			  /*start*/
		distance = GetDistance();
		if(distance >0)
		{
			if(distance > 1000) distance = 1000;
			modbus_Addt.distance = distance;
		}
		Delayms(100);//延时100ms后就行下一次测距

			  /*end*/
		 	//同步公共区数据到实际运行效果
			  /*start*/

			  /*end*/
	}
}

/*******************************************************************************
* 函 数 名 ：Init
* 函数功能 ：初始化
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void ultraSoundInit()
{
	Trig = 0;
	TMOD|=0x10;		   //设T1为方式1，GATE=1；
	TH1=0;
	TL1=0;  
	TR1 = 0;//关闭定时器	
	ET1=1;             //允许T0中断
	EX1=0;        //关闭外部中断1
	IT1=0;        //由高电平变低电平，触发外部中断
	EA=1;			   //开启总中断	
}

/*******************************************************************************
* 函 数 名 ：
* 函数功能 ：外部中断1服务函数
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void Exint1Int()  interrupt 2   // 外部中断是2号
 { 
		if(status == 3)
		{
			 dis_count = TH1*256 + TL1;
			 EX1=0;            //关闭外部中断
			 TR1 = 0;
			 status = 4;
		}
  }
 
/*******************************************************************************
* 函 数 名 ：Timer0Int
* 函数功能 ：定时器0中断服务函数
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void Timer1Int() interrupt 3  // 定时器0中断是1号
{
 TR1 = 0; 
 EX1=0; 
 status = 5;
}

int GetDistance(void)
{
	int dist = -1;

	if(status == 0)
	{
		//在测量距离过程中禁止其他中断
		ET0 = 0;
		ES = 0;			
			
		//发送触发信号
		Trig = 1;
		status = 1;
		TH1 = 0;
		TL1 = 0;
		TR1 = 1;//打开定时器
		while(TL1 < 11);//延时超过10us
		status = 2;
		Trig = 0;
		TH1 = 0;
		TL1 = 0;
		TR1 = 0;
		while(Echo == 0);//等待回向信号起始位置
		EX1 = 1;//打开外部中断
		TR1 = 1;
		status = 3;//开始计算距离
			
		//结束
		ET0 = 1;
		ES = 1;			
	 }
		if(status == 4)//成功接收到数据
		{
			long distance;
			distance = (long)(dis_count) * 340/2000;//声速340m/s
			dist = (int)distance;
			status = 0;//准备下次发送
		}
		if(status == 5)//接收数据失败
		{
			status = 0;//准备下次发送
		}
		return dist;			
}

