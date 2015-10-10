/********************************* 深圳市航太电子有限公司 *******************************
* 实 验 名 ：温度传感器下位机实验
* 实验说明 ：根据modbus协议，实时同步数据到上位机
* 实验平台 ：航太51单片机开发板 V1.1
* 连接方式 ：跳线帽CN20 引脚2,4相接
* 注    意 ：
* 作    者 ：航太电子产品研发部    QQ ：1909197536
* 店    铺 ：http://shop120013844.taobao.com/
****************************************************************************************/
#include "REG52.H"
#include "system.h"
#include "modbusRTU.h"
#include <string.h>
#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int
#define FOSC 11059200L //晶振设置，默认使用11.0592M Hz
//#define FOSC 12000000L //晶振设置，使用12M Hz
//#define FOSC 24000000L //晶振设置，使用24M Hz
#define T1MS (65536-FOSC/12/1000) 

//IO接口定义
sbit IRIN = P3^2;         //红外接收器数据线

sbit dula = P2^6;
sbit wela = P2^7;

//全局变量定义

unsigned char IRCOM[7];

void Exit0Init();
void DelayIr(unsigned char x);

/*******************************************************************************
* 函 数 名 ：main
* 函数功能 ：主函数
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void main()
{
	unsigned int temp=0;
	//关闭数码管
	dula = 1;
	P0 = 0xff;
	dula = 0;
	
  SystemInit();
	init_MODBUS();
	Exit0Init();
	
	while(1)
	{				
				//将需要交互的数据读取到公共区
			  /*start*/

			  /*end*/
		 	//同步公共区数据到实际运行效果
			  /*start*/
				
//		  temp++; 
//		if(temp == 180) 
//		{
//				temp = 0;
//				Delayms(2000);
//		}
//		Delayms(30);
		

		
			  /*end*/
	}
}


/*******************************************************************************
* 函 数 名 ：Exit0Init
* 函数功能 ：外中断0初始化程序
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void Exit0Init()
{
	EX0 = 1;	//使能 INT1 外部中断
    IT0 = 1;	// 触发方式为脉冲负边沿触发
    EA = 1;//总中断
} 

/*******************************************************************************
* 函 数 名 ：DelayIr
* 函数功能 ：0.14MS 延时
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void DelayIr(unsigned char x)  
{
 unsigned char i;
  while(x--)
 {
  for (i = 0; i<13; i++) {}
 }
}


/*******************************************************************************
* 函 数 名 ：Exit0Int
* 函数功能 ：外部中断0 ISR
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void Exit0Int() interrupt 0 
{
  unsigned char j,k,N=0;

     EX0 = 0;  
		EA = 0;
	 DelayIr(15);
	 if (IRIN==1) 
     { EX0 =1;EA = 1;
	   return;
	  } 
                           //确认IR信号出现
  while (!IRIN)            //等IR变为高电平，跳过9ms的前导低电平信号。
    {DelayIr(1);}

 for (j=0;j<4;j++)         //收集四组数据
 { 
  for (k=0;k<8;k++)        //每组数据有8位
  {
   while (IRIN)            //等 IR 变为低电平，跳过4.5ms的前导高电平信号。
     {DelayIr(1);}
    while (!IRIN)          //等 IR 变为高电平
     {DelayIr(1);}
     while (IRIN)           //计算IR高电平时长
      {
    DelayIr(1);
    N++;           
    if (N>=30)
	 { EX0=1;EA = 1;
	 return;}                  //0.14ms计数过长自动离开。
      }                        //高电平计数完毕                
     IRCOM[j]=IRCOM[j] >> 1;                  //数据最高位补“0”
     if (N>=8) {IRCOM[j] = IRCOM[j] | 0x80;}  //数据最高位补“1”
     N=0;
  }//end for k
 }//end for j

   if (IRCOM[0]!=~IRCOM[1])//地址码校验
   { EX0=1;EA = 1;
     return; }
	 
   if (IRCOM[2]!=~IRCOM[3])//数据码校验
   { EX0=1;EA = 1;
     return; }
	modbus_Addt.key_value = (int)IRCOM[2];//将数据同步到modbus区
		 modbus_Addt.key_add = (int)IRCOM[0];
    
     EX0 = 1; 
		 EA = 1;
} 


