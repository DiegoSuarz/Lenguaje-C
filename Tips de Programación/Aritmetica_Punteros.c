#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define tamano (5)

int main(){
    uint32_t *a;
    uint16_t *b;
    printf("para arreglo de 32 bits:\n");
    for(int i=0;i<tamano;i++){
        printf("El indice es %i, y la direccion de memoria es %p\n",i,a+i);
    }
    printf("\npara arreglo de 16 bits:\n");
    for(int i=0;i<tamano;i++){
        printf("El indice es %i, y la direccion de memoria es %p\n",i,b+i);
    } 

    return 0;
}