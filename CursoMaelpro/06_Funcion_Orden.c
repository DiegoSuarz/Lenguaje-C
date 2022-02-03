
/*Ejercicio 06:
Escribir una función que reciba tres parámetros enteros de 32 bits. La función
debe verificar si el valor numérico del primer parámetro es mayor al valor
numérico del segundo parámetro, y menor o igual al valor numérico del tercer
parámetro. Si la condición se cumple, entonces la función debe retornar el
valor 1; de lo contrario, la función debe retornar el valor 0. Verificar su
correcto funcionamiento mediante el uso de la función printf().
 */

/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */


/* Declaración de funciones */
int32_t Filtra_Numero(int32_t numero,
		              int32_t limite_inferior,
					  int32_t limite_superior);

/* Función principal */
int main(int argc, char *argv[]){

	int32_t resultado;

	resultado = Filtra_Numero(23, -5, 23);
	printf("El resultado del filtro es: %d", resultado);

	return 0;
}

/* Definición de funciones */
int32_t Filtra_Numero(int32_t numero,
		              int32_t limite_inferior,
					  int32_t limite_superior){

	return ((numero > limite_inferior) && (numero <= limite_superior));

}

