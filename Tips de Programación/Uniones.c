#include<stdio.h>
#include<stdint.h>

typedef struct{
    uint32_t a;
    char letras[4];
}Datos;

int main(){

    Datos d;//declarando una estructura de tipo datos
    d.a=10;
    d.letras[0]='A';
    printf("El valor de a es: %d\n",d.a);
    printf("El valor de letras[0] es: %d\n",d.letras[0]);
    return 0;
}