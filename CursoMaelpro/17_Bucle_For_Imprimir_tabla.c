/*Ejercicio 08:
Escribir una función que reciba como parámetro un número "n", natural de
8 bits, e imprima la tabla de multiplicar (como se indicó en el ejercicio
anterior) de los "n" primeros números naturales. Utilizar la función printf()
para su implementación.
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Tablas_Multiplicar(uint8_t n);

/* Función principal */
int main(int argc, char *argv[]){

	uint8_t valor_prueba = 5;
	Imprime_Tablas_Multiplicar(valor_prueba);

	return 0;
}

/* Definición de funciones */
void Imprime_Tablas_Multiplicar(uint8_t n){

	uint8_t multiplicando;
	uint8_t multiplicador;
	uint8_t producto;

	/* Para cada valor del multiplicando, desde 1 hasta n */
	for(multiplicando = 1; multiplicando <=n; multiplicando++){

		/* Agrega una cabecera para separar las tablas */
		printf("\nTabla del %d\n", multiplicando);

		/* Imprime la tabla */
		for(multiplicador = 1; multiplicador <= 12; multiplicador++){
			producto = multiplicando * multiplicador;
			printf("%d x %d = %d\n", multiplicando, multiplicador, producto);
		}
	}
}
