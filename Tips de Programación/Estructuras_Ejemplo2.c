#include <stdio.h>

//Inicializacion de structuras

//Inicializacion en tiempo de compilación
struct sensor
{
    int medicion;
    char id[8];
    float medicion_c;
}; //crear una instancia

struct sensor sensor_1 = {.medicion=1 , .id = "SNM01"};
struct sensor sensor_2 = {.medicion=20 , .id = "SNM023"};



int main(){
    
    printf("Sensor ID %s: medicion = %u\r\n",sensor_1.id,sensor_1.medicion);
    printf("Sensor ID %s: medicion = %u\r\n",sensor_2.id,sensor_2.medicion);
    return 0;
}