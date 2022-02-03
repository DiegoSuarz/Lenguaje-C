/*
Ejercicio 02:
Escribir una función que reciba como parámetro un número entero de 16 bits
(sin signo) y que imprima el mensaje "El número es par" o "El número es impar"
según corresponda. Utilizar la función printf() para su implementación.
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Indica_Paridad(uint16_t numero);


/* Función principal */
int main(int argc, char *argv[]){

	uint16_t variable_prueba = 18;

	Indica_Paridad(variable_prueba);

	return 0;
}


/* Definición de funciones */

void Indica_Paridad(uint16_t numero){

	if((numero % 2) == 0){
		printf("El número es par");
	}else{
		printf("El número es impar");
	}
}

