#include<stdio.h>

void suma(int a, int b){
    printf("Funcion suma y el resultado es:%d\n",a+b);
}

void resta(void){
    printf("Funcion Resta\n");
}

void P_funcion1(void(*fun)(int,int),int a, int b){
    fun(a,b);
}

void P_funcion2(void(*fun1)(void)){
    fun1();
}

int main(){
    P_funcion1(suma,2,3);
    P_funcion2(resta);
    return 0;
}