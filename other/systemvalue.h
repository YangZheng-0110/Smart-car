#ifndef SYSTEMVALUE
#define SYSTEMVALUE
#include <iostream>
#include <string>
using namespace std;

struct SystemValue
{
    unsigned short left_motor_speed;	// 左电机的编码器值
    unsigned short right_motor_speed; // 右电机的编码器值
    unsigned short battery_voltage;		// 电池当前电压值
    unsigned short distance;			// 距离传感器
    float temperature; //温度
    float humidity;//湿度
    int ir; //人体红外传感器
    int als;//接近传感器
    int ps;// 光照强度传感器
};


#endif // SYSTEMVALUE

