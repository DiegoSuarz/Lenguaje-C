/*Ejercicio 05:
Escribir una función que reciba como parámetros tres números enteros de
32 bits (con signo): numero, límite inferior, límite superior. La función
debe restringir el valor de número: si número es menor a límite inferior,
entonces la función debe retornar el valor de límite inferior; si número es
mayor a límite superior, entonces la función debe retornar el valor de límite
superior; si número se encuentra entre límite inferior y límite superior
(incluyéndolos), entonces la función debe retornar el valor de número.
Verificar su correcto funcionamiento mediante el uso de la función printf().
 */


/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
int32_t Filtra_Numero(int32_t numero,
				      int32_t limite_inferior,
					  int32_t limite_superior);

/* Función principal */
int main(int argc, char *argv[]){

	int32_t variable_prueba = 3;
	int32_t resultado;

	resultado = Filtra_Numero(-50, -20, 24);

	printf("La salida del filtro es %d", resultado);

	return 0;
}

/* Definición de funciones */
int32_t Filtra_Numero(int32_t numero,
				      int32_t limite_inferior,
					  int32_t limite_superior){

	int32_t resultado;

	if(numero < limite_inferior){
		resultado = limite_inferior;
	}else if(numero > limite_superior){
		resultado = limite_superior;
	}else{
		resultado = numero;
	}

	return resultado;
}
