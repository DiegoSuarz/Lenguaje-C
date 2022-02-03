
/*Ejercicio 09:
Escribir una función que reciba como parámetro dos números enteros de 8 bits
(con signo):num, pos. La función debe extraer de num el valor del bit en la
posición pos (de 0 a 7). El valor debe ser retornado a una variable local.
Verificar su correcto funcionamiento mediante el uso de las funciones
proporcionadas en clase.
 */


/* Inclusión de bibliotecas */
#include <stdint.h>
#include <stdio.h>


/* Variables globales */


/* Declaración de funciones */
int8_t Extrae_Bit(int8_t num, int8_t pos);

/* Función principal */
int main(int argc, char *argv[]){

	int8_t numerito = 0b00001010;
	int8_t posicion = 1;
	int8_t resultado;

	resultado = Extrae_Bit(numerito, posicion);

	/* Imprime el bit extraído */
	printf("El bit extraído es: %d", resultado);

	return 0;
}

/* Definición de funciones */
int8_t Extrae_Bit(int8_t num, int8_t pos){

	return ((num >> pos) & 1);

}
