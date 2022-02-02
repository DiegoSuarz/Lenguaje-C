/*
DOS APUNTADORES DE TIPO ENTERO, ESCRIBIR UNA FUNCION QUE 
PERMITA INTERCAMBIAR LA DIRECCION DE MEMORIA A LA CUAL
APUNTAN
*/

#include<stdio.h>

int a =10,b=20;
void cambia_apuntadores(int **pa, int **pb){
    *pa=&b;
    *pb=&a;
}

int main(){
    int *pa=&a,*pb=&b;

    printf("La direccion a la cual apunta pa es: %p, y pb es: %p\n",pa,pb);
    printf("despues de entrar a la funcion\n");
    cambia_apuntadores(&pa,&pb);
    printf("La direccion a la cual apunta pa es: %p, y pb es: %p\n",pa,pb);


}