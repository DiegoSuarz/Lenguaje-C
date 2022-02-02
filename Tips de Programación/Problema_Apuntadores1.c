/*
DADOS DOS VARIABLES DE TIPO ENTERO, ESCRIBIR UNA FUNCION QUE 
QUE PERMITA INTERCAMBIAR EL VALOR ENTRE AMBAS VARIABLES.

*/

#include<stdio.h>

int a=10,b=20;

void cambia_valor(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    printf("El valor de a es: %d, y de b es: %d\n",a,b);
    cambia_valor(&a,&b);
    printf("Despues de entrar a la funcion\n");
    printf("El valor de a es: %d, y de b es: %d\n",a,b);
    return 0;
}