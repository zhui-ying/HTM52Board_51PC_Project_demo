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

int temperbuf[5];

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
	Init_DS18B20();
	Read_RomCord();
	while(1)
	{				
				//将需要交互的数据读取到公共区
			  /*start*/
		 for(i=0;i<9;i++)//读取5个值
		{
			temperbuf[i] = Read_TemperatureInt();
			Delayms(15);
		}
		
		Bubblesort(temperbuf,9);//从小到大排序
		modbus_Addt.temperature = temperbuf[5];//根据实际测试，取中间偏大的值有效性最高
		  Delayms(100);
			  /*end*/
		 	//同步公共区数据到实际运行效果
			  /*start*/

			  /*end*/
	}
}




