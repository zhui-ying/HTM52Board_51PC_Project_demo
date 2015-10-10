#include "stdafx.h"
#include "modbusRTU.h"
#include <string.h>

modbusRTU::modbusRTU(void)
{
	unsigned char CRC_H_temp[] = {
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 
0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 
0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 
0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 
0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 
0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 
0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 
0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 
0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 
0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 
0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 
0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 
0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 
0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 
0x80, 0x41, 0x00, 0xC1, 0x81, 0x40 
} ; 
memcpy(CRC_H,CRC_H_temp,256);
//=================================================================================================
// CRC低位字节值表
//----------------
unsigned char CRC_L_temp[] = { 
0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06, 
0x07, 0xC7, 0x05, 0xC5, 0xC4, 0x04, 0xCC, 0x0C, 0x0D, 0xCD, 
0x0F, 0xCF, 0xCE, 0x0E, 0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09, 
0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9, 0x1B, 0xDB, 0xDA, 0x1A, 
0x1E, 0xDE, 0xDF, 0x1F, 0xDD, 0x1D, 0x1C, 0xDC, 0x14, 0xD4, 
0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3, 
0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3, 
0xF2, 0x32, 0x36, 0xF6, 0xF7, 0x37, 0xF5, 0x35, 0x34, 0xF4, 
0x3C, 0xFC, 0xFD, 0x3D, 0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A, 
0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38, 0x28, 0xE8, 0xE9, 0x29, 
0xEB, 0x2B, 0x2A, 0xEA, 0xEE, 0x2E, 0x2F, 0xEF, 0x2D, 0xED, 
0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26, 
0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60, 
0x61, 0xA1, 0x63, 0xA3, 0xA2, 0x62, 0x66, 0xA6, 0xA7, 0x67, 
0xA5, 0x65, 0x64, 0xA4, 0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F, 
0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB, 0x69, 0xA9, 0xA8, 0x68, 
0x78, 0xB8, 0xB9, 0x79, 0xBB, 0x7B, 0x7A, 0xBA, 0xBE, 0x7E, 
0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5, 
0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71, 
0x70, 0xB0, 0x50, 0x90, 0x91, 0x51, 0x93, 0x53, 0x52, 0x92, 
0x96, 0x56, 0x57, 0x97, 0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C, 
0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E, 0x5A, 0x9A, 0x9B, 0x5B, 
0x99, 0x59, 0x58, 0x98, 0x88, 0x48, 0x49, 0x89, 0x4B, 0x8B, 
0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C, 
0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42, 
0x43, 0x83, 0x41, 0x81, 0x80, 0x40 
} ;
memcpy(CRC_L,CRC_L_temp,256);
}

/**************************************************************************************************
    NAME : init_MODBUS(void)
   INPUT : NO
  OUTPUT : 
FUNCTION : 
	  modbus初始化
**************************************************************************************************/
void modbusRTU::init_MODBUS(void)
{
	modbusAdd = &modbus_Addt; //将指针指向定义好的内存
	rec_stat = PACK_START; //刚开始状态为开始接收

}


/**************************************************************************************************
    NAME : checkPACK_MODBUS
   INPUT : NO
  OUTPUT : unsigned char 返回校验结果，正确返回非零值，错误返回零。
FUNCTION : 
	   校验接收数据包的正确性
**************************************************************************************************/
unsigned char modbusRTU::checkPACK_MODBUS(unsigned char *rec_buff , int rec_num)
{
	unsigned int rec_CRC;

	rec_CRC = (rec_buff[rec_num-2] << 8) | rec_buff[rec_num-1];

	if( rec_CRC == comp_crc16(rec_buff, rec_num-2) )
	{
		return 1;
	}
	else
		return 0;
}

/**************************************************************************************************
    NAME : comp_crc16
   INPUT : unsigned char *pack 数据缓冲首地址, unsigned char num 数据字节数
  OUTPUT : unsigned int 计算结果，低位在前 高位在后（MODBUS 规定）。
FUNCTION : 
	   CRC16 计算 MODBUS使用公式：X16+X15+X2+1 。此不同于CITT公式
**************************************************************************************************/
unsigned int modbusRTU::comp_crc16(unsigned char *pack, unsigned char num) 
{ 
	unsigned char CRCcode_H = 0XFF;		// 高CRC字节初始化
	unsigned char CRCcode_L = 0XFF;		// 低CRC 字节初始化
	unsigned char index,i=0;			// 数据索引

	while (num--)
	{ 
		index = CRCcode_L ^ (pack[i++]);	

		CRCcode_L = CRCcode_H ^ CRC_H[index]; 

		CRCcode_H = CRC_L[index]; 
	} 

	return (CRCcode_L << 8 | CRCcode_H);	// MODBUS 规定低位在前
}

/*超时帧检测，在1ms定时器里面运行，返回当前状态*/
int modbusRTU::time_out_check_MODBUS(void)
{
	rec_time_out++;
	if(rec_time_out == 7)				// 数据接收超时7ms,给程式足够长的处理时间
	{
		rec_stat = PACK_START;
		rec_num = 0;
	}
	else if((rec_time_out == 4) && (rec_num > 4)) // 超时数据帧结束4ms
	{
		rec_stat = PACK_REC_OK;
	}
		return rec_stat;		
}

//数据接收处理
void modbusRTU::RecProcess(unsigned char *buf,int length)
{
	switch(rec_stat)
	{
	case PACK_START:
		rec_num = 0;
		if(buf[0] == PACK_START)//默认刚开始检测第一个字节，检测是否为本站号
		{
			for(int i=0;i<length;i++)
			{
				modbus_recv_buf[rec_num] = buf[i];
				rec_num++;
			}
			rec_stat = PACK_REC_ING;
		}
		else
		{
			rec_stat = PACK_ADDR_ERR;
		}
		break;

	case PACK_REC_ING:	// 正常接收

		for(int i=0;i<length;i++)
		{
			modbus_recv_buf[rec_num] = buf[i];
			rec_num++;
		}
		break;

	case PACK_ADDR_ERR:	// 地址不符合 等待超时 帧结束
		break;
	default : break;
	}
}

//1ms定时器处理函数，检查一帧数据是否完全接收，并将指令的值赋值到地址区
void modbusRTU::RecOKProcess()
{
	if(PACK_REC_OK == time_out_check_MODBUS()) 
	{
		//成功接收一帧数据
		unsigned char type;
		type = modbus_recv_buf[1];//读取功能码
		switch(type)
		{
		case 1:	// 01功能码：读取线圈（输出）状态  读取一组逻辑线圈的当前状态（ON/OFF）
			RecReadBit();
			break;

		case 2:	 //02功能码：读取输入状态  读取一组开关输入的当前状态（ON/OFF）
			RecReadBit();
			break;
		case 3:	//03功能码：读取保持型寄存器 在一个或多个保持寄存器中读取当前二进制值
			RecReadReg();
			break;

		case 4:	//04功能码：读取输入寄存器 在一个或多个输入寄存器中读取当前二进制值
			RecReadReg();
			break;
		case 5:	//05功能码 ：强制（写）单线圈（输出）状态  强制（写）一个逻辑线圈通断状态（ON/OFF）
			//ForceBit(type,address,count,value);
			break;

		case 6:	//06功能码：强制（写）单寄存器 把二进制写入一个保持寄存器
			//ForceReg(type,address,count,value);
			break;

		case 15:
			//force_coil_mul();
			break;

		case 16: //16功能码：强制（写）多寄存器 把二进制值写入一串连续的保持寄存器
			//ForceNReg(type,address,count,value);
			break;

		default:
			break;
		}
		rec_stat = PACK_START;
		rec_num = 0;
	}
}

//读取寄存器地址值到结构体 适用于功能码 03 04
void modbusRTU::RecReadReg()
{
	int length = modbus_recv_buf[2]/2;//获取要读取的寄存器个数
	int address = modbus_send_buf[2]*256 + modbus_send_buf[3];//从发送缓存中获取地址
	Int16 *p_modbus = (Int16 *)&modbus_Addt;
	for(int i=0;i<length;i++)
	{
		p_modbus[address+i] = modbus_recv_buf[3+2*i]*256+modbus_recv_buf[4+2*i];
	}

}

//读取位地址值到结构体 适用于功能码 01 02
void modbusRTU::RecReadBit()
{

}

//发送读指令到下位机,发送站点默认为01
//type：功能号
//address：起始地址
//count：长度
void modbusRTU::SendReadCommand(unsigned char type,Int16 address,Int16 count)
{
	switch(type)
	{
		case 1:	// 01功能码：读取线圈（输出）状态  读取一组逻辑线圈的当前状态（ON/OFF）
			ReadBit(type,address,count);
			break;

		case 2:	 //02功能码：读取输入状态  读取一组开关输入的当前状态（ON/OFF）
			ReadBit(type,address,count);
			break;
		case 3:	//03功能码：读取保持型寄存器 在一个或多个保持寄存器中读取当前二进制值
			ReadReg(type,address,count);
			break;

		case 4:	//04功能码：读取输入寄存器 在一个或多个输入寄存器中读取当前二进制值
			ReadReg(type,address,count);
			break;

		default:
			break;
	}
	rec_stat = PACK_START;
}

//发送写指令到下位机,发送站点默认为01
//type：功能号
//address：起始地址
//count：数量
//*value：一个或多个值
void modbusRTU::SendWriteCommand(unsigned char type,Int16 address,Int16 count,Int16 *value)
{
	switch(type)
	{
		case 5:	//05功能码 ：强制（写）单线圈（输出）状态  强制（写）一个逻辑线圈通断状态（ON/OFF）
			ForceBit(type,address,count,value);
			break;

		case 6:	//06功能码：强制（写）单寄存器 把二进制写入一个保持寄存器
			ForceReg(type,address,count,value);
			break;

		case 15:
			//force_coil_mul();
			break;

		case 16: //16功能码：强制（写）多寄存器 把二进制值写入一串连续的保持寄存器
			ForceNReg(type,address,count,value);
			break;

		default:
			break;
	}
	rec_stat = PACK_START;
}

//用于功能码01,02
void modbusRTU::ReadBit(unsigned char type,Int16 address,Int16 count)
{
	send_count = 8;
	modbus_send_buf[0] = 0x01;//站点
	modbus_send_buf[1] = type;//功能码
	modbus_send_buf[2] = address>>8;
	modbus_send_buf[3] = (unsigned char)address;
	modbus_send_buf[4] = count>>8;
	modbus_send_buf[5] = (unsigned char)count;
	Int16 send_CRC = comp_crc16(modbus_send_buf, send_count-2);//CRC校验
	modbus_send_buf[6] = send_CRC>>8;
	modbus_send_buf[7] = (unsigned char)send_CRC;
}

//用于功能码03,04
void modbusRTU::ReadReg(unsigned char type,Int16 address,Int16 count)
{
	send_count = 8;
	modbus_send_buf[0] = 0x01;//站点
	modbus_send_buf[1] = type;//功能码
	modbus_send_buf[2] = address>>8;
	modbus_send_buf[3] = (unsigned char)address;
	modbus_send_buf[4] = count>>8;
	modbus_send_buf[5] = (unsigned char)count;
	Int16 send_CRC = comp_crc16(modbus_send_buf, send_count-2);//CRC校验
	modbus_send_buf[6] = send_CRC>>8;
	modbus_send_buf[7] = (unsigned char)send_CRC;
}

//用于功能码 05
void modbusRTU::ForceBit(unsigned char type,Int16 address,Int16 count,Int16 *value)
{
	send_count = 8;
	modbus_send_buf[0] = 0x01;//站点
	modbus_send_buf[1] = type;//功能码
	modbus_send_buf[2] = address>>8;
	modbus_send_buf[3] = (unsigned char)address;//地址
	modbus_send_buf[4] = (unsigned char)(*value);//状态 FF or 00
	modbus_send_buf[5] = 0;
	Int16 send_CRC = comp_crc16(modbus_send_buf, send_count-2);//CRC校验
	modbus_send_buf[6] = send_CRC>>8;
	modbus_send_buf[7] = (unsigned char)send_CRC;
}

//用于功能码 06
void modbusRTU::ForceReg(unsigned char type,Int16 address,Int16 count,Int16 *value)
{
	send_count = 8;
	modbus_send_buf[0] = 0x01;//站点
	modbus_send_buf[1] = type;//功能码
	modbus_send_buf[2] = address>>8;
	modbus_send_buf[3] = (unsigned char)address;//地址
	modbus_send_buf[4] = *value>>8;
	modbus_send_buf[5] = (unsigned char)(*value);
	Int16 send_CRC = comp_crc16(modbus_send_buf, send_count-2);//CRC校验
	modbus_send_buf[6] = send_CRC>>8;
	modbus_send_buf[7] = (unsigned char)send_CRC;
}

//用于功能码 16
void modbusRTU::ForceNReg(unsigned char type,Int16 address,Int16 count,Int16 *value)
{
	send_count = 9+count*2;
	modbus_send_buf[0] = 0x01;//站点
	modbus_send_buf[1] = type;//功能码
	modbus_send_buf[2] = address>>8;
	modbus_send_buf[3] = (unsigned char)address;//地址

	modbus_send_buf[4] = count>>8;//寄存器总数
	modbus_send_buf[5] = (unsigned char)count;

	modbus_send_buf[6] = count*2;//寄存器总字节数

	for(int i=0;i<count;i++)//写入需要的值
	{
		modbus_send_buf[7+i*2] = value[i]>>8;
		modbus_send_buf[7+i*2+1] = (unsigned char)value[i];
	}

	Int16 send_CRC = comp_crc16(modbus_send_buf, send_count-2);//CRC校验
	modbus_send_buf[send_count-2] = send_CRC>>8;
	modbus_send_buf[send_count-1] = (unsigned char)send_CRC;
}

//清空接收缓存，准备下一次接收
void modbusRTU::ClearRevBuf()
{
	memset(modbus_recv_buf,0,MODBUS_LENTH);
	rec_stat = PACK_START;
	rec_num = 0;
}





