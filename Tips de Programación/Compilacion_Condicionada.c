#include<stdio.h>
//#define ESP32 1


int main(){
    #ifdef ESP32
        printf("Seleccionaste la ESP32\n");
    #else
        printf("Seleccionaste una arquitectura diferente a ESP32\n");
    #endif
}