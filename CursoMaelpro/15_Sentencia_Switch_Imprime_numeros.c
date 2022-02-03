/*Ejercicio 06:
Escribir una función que reciba como parámetro un número entero de 16 bits
(con signo). Si el número tiene un valor de 0 a 9, entonces la función debe
imprimir el valor del número escrito en letras ("Uno", "Cinco", "Nueve", etc);
si el número es menor que 0 o mayor que 9, entonces la función debe imprimir
el mensaje "Fuera de rango."
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Nombre_Numero(int16_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	int32_t variable_prueba = 2;

	Imprime_Nombre_Numero(variable_prueba);

	return 0;
}

/* Definición de funciones */
void Imprime_Nombre_Numero(int16_t numero){

	switch(numero){

		case 0:
			printf("Cero");
			break;
		case 1:
			printf("Uno");
			break;
		case 2:
			printf("Dos");
			break;
		case 3:
			printf("Tres");
			break;
		case 4:
			printf("Cuatro");
			break;
		case 5:
			printf("Cinco");
			break;
		case 6:
			printf("Seis");
			break;
		case 7:
			printf("Siete");
			break;
		case 8:
			printf("Ocho");
			break;
		case 9:
			printf("Nueve");
			break;
		default:
			printf("Fuera de rango");
	}

}
