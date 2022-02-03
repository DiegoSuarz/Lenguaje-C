/*
Ejercicio 01:
Escribir una función que lea una variable global n, entera de 16 bits (sin
signo), y que calcule la suma de los n primeros números naturales. El resultado
debe ser retornado y almacenado en una variable local de 16 bits (sin signo),
llamada resultado_sumatoria. Verificar su correcto funcionamiento mediante el
uso de la función printf().
 */

/* Inclusión de bibliotecas */
#include<stdio.h>
#include<stdint.h>

/* Variables globales */
uint16_t n = 6;

/* Declaración de funciones */
uint16_t Sumatoria_Numeros(void);

int main(int argc, char *argv){

    uint16_t resultado_sumatoria;
    n=3;

    resultado_sumatoria = Sumatoria_Numeros();
    printf("La sumatoria es %d", resultado_sumatoria);

    return 0;
}

/* Definición de funciones */
uint16_t Sumatoria_Numeros(void){
    
    return (n*(n+1))/2;


}