/*
Ejercicio 10:
Escribir una función que reciba como parámetro un número entero de 8 bits
(sin signo) y que imprima un mensaje, indicando si el número es primo o no.
Utilizar la función printf() para su implementación.
 */


/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Indica_Primo(uint8_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint8_t valor_prueba = 11;

	Indica_Primo(valor_prueba);

	return 0;
}


/* Definición de funciones */
void Indica_Primo(uint8_t numero){

	uint8_t divisor = 2;
	/* Inicialmente se asume que el número es primo*/
	uint8_t es_primo = 1;

	/* Se realiza un barrido con un divisor desde 2 hasta n-1 */
	while(divisor < numero){
		/* Si al menos una división es exacta, el número deja de ser primo */
		if((numero % divisor) == 0){
			es_primo = 0;
		}

		divisor++;
	}

	if(es_primo){
		printf("El número es primo");
	}else{
		printf("El número no es primo");
	}

}
