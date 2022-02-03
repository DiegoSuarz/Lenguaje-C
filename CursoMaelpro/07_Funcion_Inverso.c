
/*Ejercicio 07:
Escribir una función que reciba como parámetro un número entero de 8 bits
(con signo) y retorne como resultado el inverso aditivo de ese número (Por
ejemplo: si la entrada es 4 debe retornar -4; si la entrada es -35, debe
retornar 35). No está permitido el uso del signo de sustracción (-).
Verificar su correcto funcionamiento mediante el uso de la función printf().
 */

/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */


/* Declaración de funciones */
int8_t Inverso_Aditivo(int8_t n);

/* Función principal */
int main(int argc, char *argv[]){

	int8_t numerito = -128;
	int8_t resultado;

	resultado = Inverso_Aditivo(numerito);
	printf("El inverso aditivo es: %d", resultado);

	return 0;
}

/* Definición de funciones */
int8_t Inverso_Aditivo(int8_t n){
	return (~n + 1);
}

