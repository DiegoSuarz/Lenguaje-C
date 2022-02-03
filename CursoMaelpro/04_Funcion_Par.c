/*Ejercicio 04:
Escribir una función que reciba como parámetro un número entero de 16 bits
(sin signo) y que determine si el número es par o impar. Si el número es par,
la función debe retornar el valor 1; si el número es impar la función debe
retornar el valor 0. Verificar su correcto funcionamiento mediante el uso de
la función printf().
 */



/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
uint16_t Numero_Es_Par(uint16_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint16_t numerito = 12;
	uint16_t resultado;

	resultado = Numero_Es_Par(numerito);

	printf("El resultado es %d", resultado);

	return 0;
}

/* Definición de funciones */

uint16_t Numero_Es_Par(uint16_t numero){

	return ((numero % 2) == 0);

}

