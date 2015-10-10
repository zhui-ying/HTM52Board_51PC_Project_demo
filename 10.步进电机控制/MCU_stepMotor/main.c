/********************************* 深圳市航太电子有限公司 *******************************
* 实 验 名 ：温度传感器下位机实验
* 实验说明 ：根据modbus协议，实时同步数据到上位机
* 实验平台 ：航太51单片机开发板 V1.1
* 连接方式 ：跳线帽CN9 引脚1,2短接，引脚3,4短接，引脚5,6短接，引脚7,8短接；
*            步进电机连接方式：蓝线接WX1，粉红线接WX2，黄线接WX3，橙线接WX4,红线接VCC
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

//IO接口定义
sbit WX1 = P0^0;	  //定义管脚
sbit WX2 = P0^1;
sbit WX3 = P0^2;
sbit WX4 = P0^3;

sbit dula = P2^6;
sbit wela = P2^7;


int stepmotor_speed = 0;
unsigned char MotorStep = 0;

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
	//关闭数码管
	dula = 1;
	P0 = 0xff;
	dula = 0;
	
  SystemInit();
	init_MODBUS();
	
	Timer1Init();
	Delayms(200);
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

/*******************************************************************************
* 函 数 名 ：InitMotor
* 函数功能 ：初始化步进电机
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void InitMotor()
{
  WX1 = 1;
  WX2 = 1;
  WX3 = 1;
  WX4 = 1;
}

/*******************************************************************************
* 函 数 名 ：SetMotor
* 函数功能 ：控制步进电机
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void SetMotor()
{
		switch(MotorStep)
		{
		   case 0:	
				WX1 = 0;		 // WX1	   
				WX2 = 1;
				WX3 = 1;
				WX4 = 1;
				MotorStep = 1;
		   break;

		   case 1:		 
				WX1 = 0;		 // WX1WX2 
				WX2 = 0;
				WX3 = 1;
				WX4 = 1;
				MotorStep = 2;
		   break;

		   case 2:	   //WX2
				WX1 = 1;
				WX2 = 0;		 
				WX3 = 1;
				WX4 = 1;		   
				MotorStep = 3;
		   break;
		   
		   case 3:		//WX2WX3
				WX1 = 1;
				WX2 = 0;		   
				WX3 = 0;
				WX4 = 1;
				MotorStep = 4;
		   break;
		   case 4:		 //WX3
				WX1 = 1;
				WX2 = 1;		   
				WX3 = 0;
				WX4 = 1;
				MotorStep = 5;
		   break;
		   
		   case 5:			  //WX3WX4
				WX1 = 1;
				WX2 = 1;		    
				WX3 = 0;
				WX4 = 0;
				MotorStep = 6;
		   break;
		   case 6:			  //WX4
				WX1 = 1;
				WX2 = 1;		  
				WX3 = 1;
				WX4 = 0;
				MotorStep = 7;
		   break;
		   case 7:			//WX4WX1
				WX1 = 0;
				WX2 = 1;		   
				WX3 = 1;
				WX4 = 0;
				MotorStep = 0;
		   break;		
		}
}

/*******************************************************************************
* 函 数 名 ：SetMotor
* 函数功能 ：控制步进电机
* 输    入 ：无
* 输    出 ：无
*******************************************************************************/
void SetMotorRev()
{
		switch(MotorStep)
		{
		   case 0:	
				WX1 = 0;		 // WX1	   
				WX2 = 1;
				WX3 = 1;
				WX4 = 1;
				MotorStep = 7;
		   break;

		   case 1:		 
				WX1 = 0;		 // WX1WX2 
				WX2 = 0;
				WX3 = 1;
				WX4 = 1;
				MotorStep = 0;
		   break;

		   case 2:	   //WX2
				WX1 = 1;
				WX2 = 0;		 
				WX3 = 1;
				WX4 = 1;		   
				MotorStep = 1;
		   break;
		   
		   case 3:		//WX2WX3
				WX1 = 1;
				WX2 = 0;		   
				WX3 = 0;
				WX4 = 1;
				MotorStep = 2;
		   break;
		   case 4:		 //WX3
				WX1 = 1;
				WX2 = 1;		   
				WX3 = 0;
				WX4 = 1;
				MotorStep = 3;
		   break;
		   
		   case 5:			  //WX3WX4
				WX1 = 1;
				WX2 = 1;		    
				WX3 = 0;
				WX4 = 0;
				MotorStep = 4;
		   break;
		   case 6:			  //WX4
				WX1 = 1;
				WX2 = 1;		  
				WX3 = 1;
				WX4 = 0;
				MotorStep = 5;
		   break;
		   case 7:			//WX4WX1
				WX1 = 0;
				WX2 = 1;		   
				WX3 = 1;
				WX4 = 0;
				MotorStep = 6;
		   break;		
		}
}

void Timer1Int() interrupt 3 using 0
{
	int temp;
//	stepmotor_speed = modbus_Addt.stepmotor_speed * 100;// 0ms - 10ms
//	temp = 65536 - 921.6*(1000+stepmotor_speed);
	temp = 64614 - 92*(100-modbus_Addt.stepmotor_speed);
	TH1 = temp>>8;
	TL1 = temp;
	if(modbus_Addt.stepmotor_switch == 0 || modbus_Addt.stepmotor_speed == 0) return;
	if(modbus_Addt.stepmotor_dir == 0)
	{
		SetMotor();//正转
	}else
	{
		SetMotorRev();//反转
	}	
}
