/*Ejercicio 03:
Escribir una función que reciba como parámetro un número entero de 16 bits
(con signo) y que retorne el valor absoluto de dicho número. Verificar su
correcto funcionamiento mediante el uso de la función printf().
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
int16_t Valor_Absoluto(int16_t numero);


/* Función principal */
int main(int argc, char *argv[]){

	int16_t variable_prueba = -17;
	int16_t resultado;

	resultado = Valor_Absoluto(variable_prueba);

	printf("El valor absoluto de %d es %d", variable_prueba, resultado);

	return 0;
}


/* Definición de funciones */

int16_t Valor_Absoluto(int16_t numero){

	int16_t resultado;

	if(numero >= 0){
		resultado = numero;
	}else{
		resultado = -numero;
	}

	return resultado;
}
