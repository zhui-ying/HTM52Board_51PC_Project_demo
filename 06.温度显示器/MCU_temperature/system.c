#include "reg52.H"
#include "system.h"
#include "modbusRTU.h"
#include <string.h>

#define FOSC 11059200L //晶振设置，默认使用11.0592M Hz
//#define FOSC 12000000L //晶振设置，使用12M Hz
//#define FOSC 24000000L //晶振设置，使用24M Hz
#define T1MS (65536-FOSC/12/1000)   //1ms timer calculation method in 12T mode
#define BAUD 28800

volatile struct SEND_BUF send_buf;
int temper_h = 0xefff;
int temper_l = -50;

/*******************************************************************************
* 函 数 名 ：Delayms
* 函数功能 ：实现 ms级的延时
* 输    入 ：ms
* 输    出 ：无
*******************************************************************************/
void Delayms(unsigned int ms)
{
	unsigned int i,j;
	for(i=0;i<ms;i++)
	#if FOSC == 11059200L
	for(j=0;j<114;j++);
	#elif FOSC == 12000000L
	for(j=0;j<123;j++);
	#elif FOSC == 24000000L
	for(j=0;j<249;j++);
	#else
	for(j=0;j<114;j++);
	#endif
}

void SystemInit()
{
	//打开串口
	SCON=0X50;			//设置为工作方式1	10位异步收发器
	TMOD=0x20; //设置计数器工作方式2  8位自动重装计数器	
	PCON=0X80;//波特率加倍	SMOD = 1  28800
	TH1= 256 -(FOSC/12/32/(BAUD/2)); //计算溢出率
	TL1= 256 -(FOSC/12/32/(BAUD/2));
	TR1=1;	
	ES=1;

	//配置定时器0
    TMOD = TMOD | 0x01;                    //set timer0 as mode1 (16-bit)
    TL0 = T1MS;                     //initial timer0 low byte
    TH0 = T1MS >> 8;                //initial timer0 high byte
    TR0 = 1;                        //timer0 start running
    ET0 = 1;                        //enable timer0 interrupt
	EA=1;

	send_buf.busy_falg = 0;
}

//发送一帧
void PutSring(char *buf)
{
	int i;
	ES=0;
	for(i=0;i<strlen(buf);i++)
	{
		SBUF = buf[i];//写入SBUF，开始发送，后面就自动进入中断发送
		while(!TI);		  //等待发送数据完成
		TI=0;			  //清除发送完成标志位
	}
	ES=1;
}
void PutNChar(char *buf,int length)
{
	while(send_buf.busy_falg);//查询发送是否忙，否则循环等待
	send_buf.length = length;
	send_buf.index = 0;	
	send_buf.buf = buf;
	send_buf.busy_falg = 1;
	SBUF = send_buf.buf[0];//写入SBUF，开始发送，后面就自动进入中断发送	
}

//串口中断
void SerISR() interrupt 4 using 2
{
	if(RI == 1)
	{
		unsigned char data_value;
		RI=0;
		if(send_buf.busy_falg == 1) return;//发送未完成时禁止接收
		data_value = SBUF;
		rec_time_out = 0;//一旦接收到数据，清空超时计数
		switch(rec_stat)
		{
			case PACK_START:
				rec_num = 0;
				if(data_value == PACK_START)//默认刚开始检测第一个字节，检测是否为本站号
				{
					modbus_recv_buf[rec_num++] = data_value;
					rec_stat = PACK_REC_ING;
				}
				else
				{
					rec_stat = PACK_ADDR_ERR;
				}
				break;
	
			case PACK_REC_ING:	// 正常接收
	
				modbus_recv_buf[rec_num++] = data_value;
				break;
	
			case PACK_ADDR_ERR:	// 地址不符合 等待超时 帧结束
				break;
			default : break;
		}
		
	}
	if(TI == 1)	 //进入发送完成中断，检测是否有需要发送的数据并进行发送
	{
		TI = 0;
		send_buf.index++;
		if(send_buf.index >= send_buf.length)
		{
			send_buf.busy_falg = 0;//发送结束
			return;
		}
		SBUF = send_buf.buf[send_buf.index];//继续发送下一个	
	}
}

/* 定时器中断 1ms*/
void Time0ISR() interrupt 1 using 1
{
    TL0 = T1MS;                     //reload timer0 low byte
    TH0 = T1MS >> 8;                //reload timer0 high byte

	if(PACK_REC_OK == time_out_check_MODBUS()) 
	{
		//成功接收一帧数据后，处理modbus信息，同步公共区数据
		function_MODBUS(modbus_recv_buf);
	}
}

void Bubblesort(int *buf,int n)
{
	int i,j,tag,temp;
	for(i=0,tag=1;tag==1&&i<n-1;i++) //控制排的次数，有n个数一共可以排n-1次，
	{
		tag=0;
		for(j=1;j<n-i;j++)//控制在一次排序中，两个数之间的交换排序
		if(buf[j-1]>buf[j])
		{
			temp=buf[j-1];
			buf[j-1] =buf[j];
			buf[j]=temp;
			tag=1;
		}
	}
}


