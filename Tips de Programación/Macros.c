#include<stdio.h>
#define cuadrado(x) (x)*(x)

int main(){
    int a = 10;
    printf("El cuadrado de 10+2: %i",cuadrado(a+2));
    return 0;
    //#define cuadrado(x) x*x
   //el compilador asume lo siguiente: a+2*a+2 reemplazando 
   // lo siguiente: 10+2*10*2= 32 esto no es lo que 
   //esperamos(144)
   //lo correcto es:
   //#define cuadrado(x) (x)*(x)

}