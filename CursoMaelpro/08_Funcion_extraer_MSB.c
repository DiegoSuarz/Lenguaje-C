/*Ejercicio 08:
Escribir una función que reciba como parámetro un número entero de 32 bits
(con signo) y extraiga el byte más significativo (los 8 bits de la izquierda).
El valor de este byte debe ser almacenado en una variable local de 32 bits
(con signo) llamada resultado_msb. Verificar su correcto funcionamiento
mediante el uso de las funciones proporcionadas en clase.
 */


/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */


/* Declaración de funciones */
int32_t Extrae_MSB(int32_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	int32_t numerito = 0x12345678;
	int32_t resultado_msb;

	resultado_msb = Extrae_MSB(numerito);

	/* Imprime el byte extraído en formato hexadecimal */
	printf("El  byte más significativo es 0x%x", resultado_msb);

	return 0;
}

/* Definición de funciones */
int32_t Extrae_MSB(int32_t numero){

	int32_t resultado;

	resultado = (numero >> 24) & 0x000000FF;

	return resultado;

}

