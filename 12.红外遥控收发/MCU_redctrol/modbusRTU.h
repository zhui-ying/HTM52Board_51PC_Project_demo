#ifndef __MODBUSRTU_H
#define __MODBUSRTU_H

/*modbusRTU头文件，实现单片机上的通讯功能*/
#define MODBUS_LENTH  15   //modbus接收发送的长度
//=================================================================================================
#define MODBUS_ADDR			0X01//modbus协议站号

//modbus接收包状态-----------------------------------
#define PACK_START		1	// 数据开始接受
#define PACK_REC_ING		2//正在接收数据
#define PACK_ADDR_ERR		4	// 地址不符合
#define PACK_REC_OK		8	// 与接收字节数 共同判断 接受一个帧成功

#define MODBUS_OK 1	  
#define MODBUS_REC 0

/*结构体定义*/
/*modbus 16位值的定义，起始地址0000H,每一个值为16位 int型，占两个字节 */
struct MODBUS_ADD{
	int key_value;//地址:0000H  遥控键值
	int key_add;//地址:0001H  遥控地址码
};

extern volatile struct MODBUS_ADD modbus_Addt;//声明一个modbus结构体变量
extern struct MODBUS_ADD *modbusAdd;//结构体指针，指向这个变量
extern int rec_time_out;//超时
extern int rec_stat;//接收状态
extern int rec_num;//接收的字节数
extern volatile int send_count;//要发送的字节数
extern unsigned char modbus_recv_buf[MODBUS_LENTH];	 //  

unsigned char checkPACK_MODBUS(unsigned char *rec_buff , int rec_num);

unsigned int comp_crc16(unsigned char *pack, unsigned char num);
void init_MODBUS(void);
unsigned char checkPACK_MODBUS(unsigned char *rec_buff , int rec_num);
unsigned int comp_crc16(unsigned char *pack, unsigned char num);
void function_MODBUS(unsigned char *rec_buff);
void read_reg(unsigned char * rec_buff);
void force_reg(unsigned char * rec_buf);
int time_out_check_MODBUS(void);
#endif


