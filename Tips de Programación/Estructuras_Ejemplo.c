#include <stdio.h>

//Inicializacion de structuras

//Inicializacion en tiempo de compilación
struct sensor
{
    int medicion;
    char id[8];
    float medicion_c;
}sensor_1,sensor_2; //crear una instancia

int main(){
    sensor_1.medicion=1;
    sensor_2.medicion=20;

    sprintf(sensor_1.id,"SNM01"); //escribiendo dentro de la variable "SNM01"
    sprintf(sensor_2.id,"SNM023"); //escribiendo dentro de la variable "SNM023"

    printf("Sensor ID %s: medicion = %u\r\n",sensor_1.id,sensor_1.medicion);
    printf("Sensor ID %s: medicion = %u\r\n",sensor_2.id,sensor_2.medicion);
    return 0;
}