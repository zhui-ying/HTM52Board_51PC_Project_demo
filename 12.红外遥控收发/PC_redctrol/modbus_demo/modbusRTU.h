#pragma once

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#define MODBUS_ADDR			0X01//modbus协议站号
//-----------------------------------
#define PACK_START		1	// 数据开始接受
#define PACK_REC_ING		2//正在接收数据
#define PACK_ADDR_ERR		4	// 地址不符合
#define PACK_REC_OK		8	// 与接收字节数 共同判断 接受一个帧成功

#define MODBUS_LENTH  20   //modbus接收发送的长度

#define MODBUS_OK 1	  
#define MODBUS_REC 0

/*功能码定义*/
#define FUN_READCOIL 1
#define FUN_READBIT 2
#define FUN_REGH 3
#define FUN_REG 4
#define FUN_WRITEBIT 5
#define FUN_WRITEREG 6
#define FUN_WRITENREG 16

/*modbus 16位值的定义，起始地址0000H,每一个值为16位 int型，占两个字节 */
struct MODBUS_ADD{
	Int16 key_value;//地址:0000H  遥控键值
	Int16 key_add;//地址:0001H  遥控地址码
};

class modbusRTU
{
public:
	struct MODBUS_ADD modbus_Addt;//声明一个modbus结构体变量
	struct MODBUS_ADD *modbusAdd;//结构体指针，指向这个变量
	int rec_time_out;//超时
	int rec_stat;//接收状态
	int rec_num;//接收的字节数
	int send_count;//要发送的字节数
	unsigned char modbus_send_buf[MODBUS_LENTH]; //发送缓存
	unsigned char modbus_recv_buf[MODBUS_LENTH]; //接收缓存
//=================================================================================================
// CRC 高位字节值表 
//------------------
unsigned char CRC_H[256]; 
//=================================================================================================
// CRC低位字节值表
//----------------
unsigned char CRC_L[256];

public:
	modbusRTU(void);
	void init_MODBUS(void);
	unsigned char checkPACK_MODBUS(unsigned char *rec_buff , int rec_num);
	unsigned int comp_crc16(unsigned char *pack, unsigned char num); 
	int time_out_check_MODBUS(void);
	void SendReadCommand(unsigned char type,Int16 address,Int16 count);
	void ReadBit(unsigned char type,Int16 address,Int16 count);
	void ReadReg(unsigned char type,Int16 address,Int16 count);
	void SendWriteCommand(unsigned char type,Int16 address,Int16 count,Int16 *value);
	void ForceBit(unsigned char type,Int16 address,Int16 count,Int16 *value);
	void ForceReg(unsigned char type,Int16 address,Int16 count,Int16 *value);
	void ForceNReg(unsigned char type,Int16 address,Int16 count,Int16 *value);
	void RecProcess(unsigned char *buf,int length);
	void RecOKProcess();
	void RecReadReg();
	void RecReadBit();
	void ClearRevBuf();
};
