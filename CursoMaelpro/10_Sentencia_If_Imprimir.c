/*
Ejercicio 01:
Escribir una función que reciba como parámetro un número entero de 16 bits
(sin signo) y que imprima el valor del número solo si éste es múltiplo de 5.
Utilizar la función printf() para su implementación.
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Multiplo_5(uint16_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint16_t variable_prueba = 25;

	Imprime_Multiplo_5(variable_prueba);

	return 0;
}


/* Definición de funciones */
void Imprime_Multiplo_5(uint16_t numero){

	if((numero % 5) == 0){
		printf("%d", numero);
	}

}
