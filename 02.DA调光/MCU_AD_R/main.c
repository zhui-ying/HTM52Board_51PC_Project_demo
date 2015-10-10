#include "REG52.H"
#include "system.h"
#include "modbusRTU.h"

#include <string.h>

#define uchar unsigned char
#define uint unsigned int
#define  PCF8591 0x90    //PCF8591 地址

sbit SCL=P2^3;         //串行时钟输入端
sbit SDA=P2^4;   //串行数据输入端

void delay()   //延时4-5个微秒
{;;}
	
void delay_1ms(int n_ms)
{
	int i = 0;
	uchar j=0;
	for(i=0;i<n_ms;i++)
	for(j=0;j<114;j++);
}

void start()//开始信号
{
 SDA=1;
    delay();
  SCL=1;
    delay();
  SDA=0;
    delay();
}

void stop()      //停止信号
{
 SDA=0;
    delay();
  SCL=1;
    delay();
  SDA=1;
    delay();  
}


void respons()//应答   相当于一个智能的延时函数
{
        uchar i;
  SCL=1;
    delay();
  while((SDA==1)&&(i<250))
           i++;
      SCL=0;
    delay();
}

void init()      //初始化
{
  SDA=1;
    delay();
  SCL=1;
    delay();    
}

uchar read_byte()
{
   uchar i,k;
        SCL=0;
    delay();
  SDA=1;
    delay();
  for(i=0;i<8;i++)
   {
         SCL=1;
            delay();
          k=(k<<1)|SDA;//先左移一位，再在最低位接受当前位
             SCL=0;
            delay();
  }
 return k;

}

void write_byte(uchar date)       //写一字节数据
{
       uchar i,temp;
     temp=date;
        for(i=0;i<8;i++)
   {
         temp=temp<<1; //左移一位 移出的一位在CY中
          SCL=0;                      //只有在scl=0时sda能变化值
                delay();
          SDA=CY;
           delay();
          SCL=1;
            delay();            
  }   
  SCL=0;
    delay();
  SDA=1;
    delay();
}



void write_add(uchar control,uchar date)
{
        start();
  write_byte(PCF8591);        //10010000  前四位固定 接下来三位全部被接地了 所以都是0 最后一位是写 所以为低电平
        respons();
        write_byte(control);
      respons();
        write_byte(date);
 respons();
        stop();

}

uchar read_add(uchar control)
{
  uchar date;
       start();
  write_byte(PCF8591);
      respons();
        write_byte(control);
      respons();
        start();
  write_byte(PCF8591+1);       //把最后一位变成1，读
     respons();
        date=read_byte();
 stop();
   return date;

}

void main()
{
	 SystemInit();
	 init_MODBUS();
	while(1)
	{				
				//将需要交互的数据读取到公共区
			  /*start*/
		//必须读两次才正确
         modbus_Addt.AD_Resist=read_add(0x40);  //电位器AD采样，读取地址0x40
		 delay_1ms(1);		 //两次AD操作之间需要间隔一定的时间才能正常读取
//		
//		 modbus_Addt.AD_Hot=read_add(0x41);	//热敏，读取地址0x41
//	     delay_1ms(1);
//		
//		 modbus_Addt.AD_Light=read_add(0x42);	 //光敏，读取地址0x42
//	     delay_1ms(1);
//		
//		 modbus_Addt.AD_Out=read_add(0x43);	 //外部，读取地址0x43	
//	     delay_1ms(1);
			  /*end*/
		
		 	//同步公共区数据到实际运行效果
			  /*start*/
		write_add(0x40,modbus_Addt.DA_LED);  //写DA值，写入地址0x40
		delay_1ms(1);
			  /*end*/
	}
}




