#include<stdio.h>

typedef enum{
    wifi_error,
    wifi_connected,
    wifi_password_error
}wifi;
wifi wifi_state = wifi_password_error;

enum{
    gps_error,
    gps_connected,
    gps_waiting,
    gps_idle,
    gps_data_ack
};
int gps_state;

enum{
    sensor_measure_ok,
    sensor_error=0x56,
    flag_sensor_filter,
    flag_sensor_alarm
};
int sensor_state;

int main(){

    printf("Wifi_state: %d\r\n",wifi_state);

    gps_state=gps_data_ack;
    printf("gps_state: %d\r\n",gps_state);

    sensor_state=flag_sensor_filter;
    printf("sensor_state: %0x\r\n",sensor_state);

    return 0;
}