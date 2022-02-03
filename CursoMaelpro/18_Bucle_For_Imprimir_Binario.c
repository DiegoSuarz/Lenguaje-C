/*Ejercicio 09:
Escribir una función que reciba como parámetro un número entero de 8 bits
(con signo), y que imprima el valor del número en formato binario (Por ejemplo:
 "10101111"). Utilizar la función printf() para su implementación.
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Binario(int8_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	int8_t valor_prueba = 5;
	Imprime_Binario(valor_prueba);

	return 0;
}

/* Definición de funciones */
void Imprime_Binario(int8_t numero){

	int8_t posicion;

	for(posicion = 7; posicion >= 0; posicion--){

		if(numero & (1 << posicion)){
			printf("1");
		}else{
			printf("0");
		}
	}
}
