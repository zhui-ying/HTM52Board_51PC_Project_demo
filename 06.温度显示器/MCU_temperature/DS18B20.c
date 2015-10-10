#include "DS18B20.h"

unsigned char data  RomCode[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};


/*******************************************************************/
/*                                                                 */
/*us级延时函数                                                     */
/*                                                                 */
/*******************************************************************/

void Delay(unsigned int num)
{
  while( --num );
}

/*******************************************************************/
/*                                                                 */
/*初始化ds1820                                                     */
/*                                                                 */
/*******************************************************************/
bit Init_DS18B20(void)
{ 
		bit presence;
     DQ = 1;      //DQ复位
     Delay(8);    //稍做延时

     DQ = 0;      //单片机将DQ拉低
     Delay(90);   //精确延时 大于 480us

     DQ = 1;       //拉高总线
     Delay(8);

     presence = DQ;    //如果=0则初始化成功 =1则初始化失败
     Delay(100);
     DQ = 1; 
     
     return(presence); //返回信号，0=presence,1= no presence
}

/*******************************************************************/
/*                                                                 */
/* 读一个字节                                                      */
/*                                                                 */
/*******************************************************************/
unsigned char ReadOneChar(void)
{
   unsigned char i = 0;
   unsigned char dat = 0;

   for (i = 8; i > 0; i--)
   {
     DQ = 0; // 给脉冲信号
     dat >>= 1;
     DQ = 1; // 给脉冲信号

     if(DQ)
     dat |= 0x80;
     Delay(4);
   }
    return (dat);
}

/*******************************************************************/
/*                                                                 */
/* 写一个字节                                                      */
/*                                                                 */
/*******************************************************************/
void  WriteOneChar(unsigned char dat)
{
  unsigned char i = 0;
  for (i = 8; i > 0; i--)
  {
    DQ = 0;
    DQ = dat&0x01;
    Delay(5);

    DQ = 1;
    dat>>=1;
  }
}

/*******************************************************************/
/*                                                                 */
/* 温度报警值写入DS18B20                                           */
/*                                                                 */
/*******************************************************************/
void Write_Temperature_alarm(unsigned char Temp_h , unsigned char Temp_l)
{
    Init_DS18B20();
  
    WriteOneChar(0xCC);           //跳过读序号列号的操作 
    WriteOneChar(0x4e);           //将设定的温度报警值写入 DS18B20
	WriteOneChar(Temp_h);  //写TH
	WriteOneChar(Temp_l);  //写TL
    WriteOneChar(0x7f);           //12位精确度
 
	Init_DS18B20();
    WriteOneChar(0xCC);           //跳过读序号列号的操作 
    WriteOneChar(0x48);           //把暂存器里的温度报警值拷贝到EEROM
}

/*******************************************************************/
/*                                                                 */
/* 读取64位序列码                                                  */
/*                                                                 */
/*******************************************************************/
void Read_RomCord(void)
{
   unsigned char j;
   Init_DS18B20();
  
   WriteOneChar(0x33);          // 读序列码的操作
   for (j = 0; j < 8; j++)
   {
     RomCode[j] = ReadOneChar() ; 
   }
}

/*******************************************************************/
/*                                                                 */
/*DS18B20的CRC8校验程序                                            */
/*                                                                 */
/*******************************************************************/
unsigned char CRC8() 
{ 
   unsigned char i,x; 
	unsigned char crcbuff,crc;
   
   crc=0;
   for(x = 0; x <8; x++)
   {
    crcbuff=RomCode[x];
    for(i = 0; i < 8; i++) 
     { 
      if(((crc ^ crcbuff)&0x01)==0) 
      crc >>= 1; 
       else { 
              crc ^= 0x18;   //CRC=X8+X5+X4+1
              crc >>= 1; 
              crc |= 0x80; 
            }         
      crcbuff >>= 1;       
	 }
   }
     return crc;	
}

/*******************************************************************/
/*                                                                 */
/* 读取温度                                                        */
/*                                                                 */
/*******************************************************************/
unsigned char Read_Temperature(void)
{
	unsigned char  i; 
	unsigned char temp_comp;	
	unsigned char temp_data[2];
	unsigned char temp_alarm[2];
	Init_DS18B20();

	WriteOneChar(0xCC);        //跳过读序号列号的操作
	WriteOneChar(0x44);        //启动温度转换

	Init_DS18B20();

	WriteOneChar(0x55);         //匹配ROM命令
	for(i=0;i<8;i++)
	WriteOneChar(RomCode[i]);

	WriteOneChar(0xBE);         //读取温度寄存器

	temp_data[0] = ReadOneChar();   //温度低8位
	temp_data[1] = ReadOneChar();   //温度高8位
	temp_alarm[0] = ReadOneChar();  //温度报警TH
	temp_alarm[1] = ReadOneChar();  //温度报警TL

	temp_comp=((temp_data[0]&0xf0)>>4)|((temp_data[1]&0x0f)<<4);//取温度整数值
	return temp_comp;  
														 
}

/*******************************************************************/
/*                                                                 */
/* 读取温度,返回带符号的温度值                                                      */
/*                                                                 */
/*******************************************************************/
int Read_TemperatureInt(void)
{
	unsigned char  i; 
	int temp_comp;	
	unsigned char temp_data[2];
	unsigned char temp_alarm[2];
	while(Init_DS18B20());

	WriteOneChar(0xCC);        //跳过读序号列号的操作
	WriteOneChar(0x44);        //启动温度转换
	
	Delay(100);//延时等待转换完成
	
	while(Init_DS18B20());

	WriteOneChar(0x55);         //匹配ROM命令
	for(i=0;i<8;i++)
	WriteOneChar(RomCode[i]);

	WriteOneChar(0xBE);         //读取温度寄存器

	temp_data[0] = ReadOneChar();   //温度低8位
	temp_data[1] = ReadOneChar();   //温度高8位
	temp_alarm[0] = ReadOneChar();  //温度报警TH
	temp_alarm[1] = ReadOneChar();  //温度报警TL

  temp_comp = temp_data[1];
	temp_comp <<= 8;
	temp_comp |= temp_data[0];
	return temp_comp;  
														 
}


