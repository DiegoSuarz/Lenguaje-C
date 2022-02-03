/*Ejercicio 07:
Escribir una función que reciba como parámetro un número natural de 8 bits
e imprima la tabla de multiplicar de dicho número (desde nx1 hasta nx12).
Utilizar la función printf() para su implementación.
 */

/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Tabla_Multiplicar(uint8_t n);

/* Función principal */
int main(int argc, char *argv[]){

	uint8_t valor_prueba = 5;
	Imprime_Tabla_Multiplicar(valor_prueba);

	return 0;
}

/* Definición de funciones */
void Imprime_Tabla_Multiplicar(uint8_t n){

	uint8_t multiplicador;
	uint8_t producto;

	for(multiplicador = 1; multiplicador <= 12; multiplicador++){
		producto = n * multiplicador;
		printf("%d x %d = %d\n", n, multiplicador, producto);
	}

}
