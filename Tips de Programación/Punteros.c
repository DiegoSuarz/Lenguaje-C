#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=9;
    int *ptr_a;
    ptr_a=&a;//inicializando el ptr_a con el valor de la direccion de la variable a
    printf("el valor de la variable a es: %d ",a);
    printf("\n la direccion de la variable es: %d ",&a);
    *ptr_a=12; //accediendo al valor almacenado en la direccion del puntero ptr_a (que apunta a la variable a) cambiando de forma indirecta el valor de a
    printf("\nel nuevo  valor de la variable a es: %d ",a);
    printf("\n la direccion de la variable es: %d ",&a);
    printf("\nEl valor de la variable puntero ptr_a es: %d",ptr_a);
    printf("\n la direccion de la variable puntero ptr_a es: %d ",&ptr_a);
    return 0;
}