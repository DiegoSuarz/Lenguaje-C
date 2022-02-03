/*Ejercicio 03:
Escribir una función que reciba como parámetros tres números enteros de 8 bits
(sin signo) y que calcule el promedio aritmético de dichos números.
El resultado debe ser retornado y almacenado en una variable local llamada
promedio. Verificar su correcto funcionamiento mediante el uso de la función
printf().
 */

/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */


/* Declaración de funciones */
uint8_t Calcula_Promedio(uint8_t a, uint8_t b, uint8_t c);

/* Función principal */
int main(int argc, char *argv[]){

	uint8_t x = 7;
	uint8_t y = 2;
	uint8_t z = 5;
	uint8_t promedio;

	promedio = Calcula_Promedio(x, y, z);
	printf("El promedio es %d", promedio);

	return 0;
}

/* Definición de funciones */
uint8_t Calcula_Promedio(uint8_t a, uint8_t b, uint8_t c){

	return (a + b + c) / 3;

}
