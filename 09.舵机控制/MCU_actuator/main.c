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
#include <string.h>
#include <stdio.h>

sfr T2MOD  = 0xC9;
sfr IPH    = 0xB7;

#define uchar unsigned char
#define uint unsigned int
#define FOSC 11059200L //晶振设置，默认使用11.0592M Hz
//#define FOSC 12000000L //晶振设置，使用12M Hz
//#define FOSC 24000000L //晶振设置，使用24M Hz
#define T1MS (65536-FOSC/12/1000) 

sbit PWM=P0^4;

//IO接口定义
sbit contrl_out=P0^7;

int count=0; //每50us计数一次，计数范围 0-200
int actuator_angle = 0;//读取的角度值
volatile unsigned int plus_h;//换算得到的IO口电平变化参考值，范围500 - 2500
volatile unsigned int plus_l;//换算得到的IO口电平变化参考值，范围500 - 2500

void Timer1Init();

/*******************************************************************************
* 函 数 名 ：main
* 函数功能 ：主函数
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void main()
{
	unsigned int temp=0;
  SystemInit();
	init_MODBUS();
	
	Timer1Init();
	modbus_Addt.actuator_angle = 0;
	plus_h = 65075 - 256*actuator_angle/25;
	plus_l = 47565 + 256*actuator_angle/25;
	Delayms(1000);//延时1s，舵机归位
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

void Timer1Init()
{
	 //更改优先级,设为最高
	  IPH |= 0x80;
	  IP |= 0x80;
	
	  TMOD = TMOD | 0x10;                    //set timer1 as mode1 (16-bit)
    TL1 = (65536 - 20000)%256;                     //initial timer1 low byte
    TH1 = (65536 - 20000)/256;                //initial timer1 high byte
    TR1 = 1;                        //timer1 start running
    ET1 = 1;                        //enable timer1 interrupt
}


void Timer1Int() interrupt 3 using 0
{
	static data bit flag=0;
	unsigned int temp=0;
		temp = modbus_Addt.actuator_angle;

		if(temp != actuator_angle && temp < 180)
		{
			actuator_angle = temp;
		  //plus = actuator_angle*2000/180+500;//计算得到IO变化值
		//plus = actuator_angle*100/9+500;//计算得到IO变化
			plus_h = 65075 - (actuator_angle<<8)/25;
			plus_l = 47565 + (actuator_angle<<8)/25;
		}
		
	if(flag == 1)
	{
		TH1 = plus_l>>8;
		TL1 = plus_l;
		contrl_out = 0;
		flag = 0;
	}else
	{
		TH1 = plus_h>>8;
		TL1 = plus_h;
		contrl_out = 1;	
		flag = 1;
	}
}
