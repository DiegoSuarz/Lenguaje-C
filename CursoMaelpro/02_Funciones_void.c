/*
Ejercicio 02:
Escribir una función que reciba dos parámetros enteros de 32 bits (con signo)
y que calcule el cuadrado de la suma de dichos parámetros. El resultado debe
ser almacenado en una variable global entera de 32 bits (con signo) llamada
resultado_suma_cuadrado. Verificar su correcto funcionamiento mediante el uso
de la función printf().
 */

/* Inclusión de bibliotecas */
#include <stdio.h>
#include <stdint.h>

/* Variables globales */
int32_t resultado_suma_cuadrado;

/* Declaración de funciones */
void Cuadrado_Suma(int32_t a, int32_t b);

/* Función principal */
int main(int argc,char *argv){

    int32_t x=7;
    int32_t y=2;

    Cuadrado_Suma(x,y);
    printf("El cuadrado de la suma vale: %d",resultado_suma_cuadrado);
    return 0;
}

void Cuadrado_Suma(int32_t a, int32_t b){

    resultado_suma_cuadrado = ((a+b)*(a+b));
}