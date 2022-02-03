/*
Usar funcion while
Ejercicio 12:
Escribir una función no-recursiva que reciba como parámetro un número entero
de 16 bits (sin signo) y que calcule e imprima el factorial de dicho número.
Utilizar la función printf() para su implementación.
 */


/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
uint16_t Factorial(uint16_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint16_t variable_prueba = 6;
	uint16_t resultado;

	resultado = Factorial(variable_prueba);
	printf("El factorial de %d es %d", variable_prueba, resultado);

	return 0;
}

/* Definición de funciones */
uint16_t Factorial(uint16_t numero){

	/* Inicializar factorial en 1 (el valor de 0! es 1) */
	uint16_t factorial = 1;

	while(numero > 0){
		factorial *= numero;
		numero--;
	}

	return factorial;
}
