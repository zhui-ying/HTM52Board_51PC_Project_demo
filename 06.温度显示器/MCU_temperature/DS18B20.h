#ifndef __DS18B20_H__
#define __DS18B20_H__

#include <reg52.h>
#include <intrins.h>

sbit DQ = P2^2;  //¶¨ÒåDS18B20¶Ë¿ÚDQ  

bit Init_DS18B20(void);
unsigned char Read_Temperature(void);
void Read_RomCord(void);
int Read_TemperatureInt(void);

#endif
