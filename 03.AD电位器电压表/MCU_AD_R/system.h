#ifndef __SYSTEM_H
#define __SYSTEM_H

//一定要全部采用unsigned char型，否则会出现因优化出错的问题
struct SEND_BUF{
unsigned char busy_falg;//忙标志，若在发送数据时置位1，即在开始发送置位1，发送结束置位0
unsigned char index;//索引，指向需要发送数组的位置
unsigned char length;//整个数据帧的长度
unsigned char *buf;//指向需要发送的数据帧，建议为全局变量，否则一旦开始发送，必须等到发送结束，即判断busy_falg为
} ;

void SystemInit();
void PutNChar(char *buf,int length);
void PutSring(char *buf);

#endif
