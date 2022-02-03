/*
Ejercicio 05:
Modificar la función anterior de modo que retorne 1 si el número es impar,
y 0 si el número es par. Verificar su correcto funcionamiento mediante el
uso de la función printf().
 */

/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
uint16_t Numero_Es_Impar(uint16_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint16_t numerito = 9;
	uint16_t resultado;

	resultado = Numero_Es_Impar(numerito);

	printf("El resultado es %d", resultado);

	return 0;
}

/* Definición de funciones */

uint16_t Numero_Es_Impar(uint16_t numero){

	return (numero % 2);

}



