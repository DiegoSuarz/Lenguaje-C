/*Ejercicio 11:
Escribir una función que reciba como parámetro un número entero de 32 bits
(sin signo) y que imprima, uno a uno, dígitos significativos de dicho número.
Los dígitos deben ser impresos empezando por las unidades. Utilizar la función
printf() para su implementación.
 */


/* Inclusiones */
#include <stdint.h>
#include <stdio.h>

/* Variables globales */

/* Declaración de funciones */
void Imprime_Digitos(uint32_t numero);

/* Función principal */
int main(int argc, char *argv[]){

	uint32_t variable_prueba =3656987;

	Imprime_Digitos(variable_prueba);

	return 0;
}


/* Definición de funciones */
void Imprime_Digitos(uint32_t numero){

	uint32_t digito;

	do{
		/* Extraer el digito menos significativo (unidades) */
		digito = numero % 10;
		/* Imprimir el digito extraído */
		printf("%d\n",digito);
		
		/* "Desplazar" un digito a la derecha */
		numero /= 10;
	}while(numero > 0);
}
