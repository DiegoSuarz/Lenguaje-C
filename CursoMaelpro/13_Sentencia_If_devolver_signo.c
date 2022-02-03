/*Ejercicio 04:
Implementar la función signo: la función recibe como parámetro un número
entero de 8 bits (con signo) y retorna 1 si el número es positivo, retorna -1
si el número es negativo, y retorna 0 si el número es cero. Verificar su
correcto funcionamiento mediante el uso de la función printf().
 */


/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
int8_t Funcion_Signo(int8_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	int8_t variable_prueba = -51;
	int8_t resultado;

	resultado = Funcion_Signo(variable_prueba);
	printf("La función signo de %d es %d", variable_prueba, resultado);

	return 0;
}


/* Definición de funciones */
int8_t Funcion_Signo(int8_t numero){

	int8_t resultado;

	if(numero < 0){
		resultado = -1;
	}else if(numero > 0){
		resultado = 1;
	}else{
		resultado = 0;
	}

	return resultado;
}
