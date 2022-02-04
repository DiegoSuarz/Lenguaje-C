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

float sensor_convertir_medicion();

int main(){
    
    sensor_1.medicion_c = sensor_convertir_medicion(sensor_1);
    printf("Medicion: %u, Medicion_C: %f",sensor_1.medicion, sensor_1.medicion_c);
    return 0;
}

float sensor_convertir_medicion(struct sensor s){
    return ((float)s.medicion)*2.5;
}