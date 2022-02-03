/*Ejercicio 02:

Se requiere implementar una función que reciba como parámetros 03 números
enteros de 32 bits que representan datos de una señal PWM: amplitud (en
voltios), ciclo de trabajo (en %), frecuencia (en Hz). La función debe calcular
los siguientes datos: voltaje promedio (en voltios), tiempo en alto (en us) y
periodo (en us). Todos los resultados deben ser almacenados en variables
locales de 32 bits. Utilizar la función printf() para verificar su funcionamiento.
 */
/*
valores:
	amplitud = 20, duty_cycle=25 , frecuencia = 1000

 - voltaje promedio = (amplitud * duty_cycle)/100
 - periodo = 1/f
 - tiempo en alto = (periodo * duty_cycle)/100

*/

/* Inclusiones */
#include <stdio.h>
#include <stdint.h>


/* Declaración de funciones (prototipos) */

void Analiza_PWM(uint32_t amplitud, uint32_t duty_cycle, uint32_t frecuencia,
		         uint32_t *vdc, uint32_t *t_alto, uint32_t *periodo);


/* Función principal */

int main(int argc, char *argv[]){

	/* Definición de variables de prueba (Entradas) */
	uint32_t valor_amplitud = 20;
	uint32_t valor_duty_cycle = 25;
	uint32_t valor_frec = 10000;
	/* Declaración de variables de prueba (Salidas) */
	uint32_t valor_t_alto;
	uint32_t valor_dc;
	uint32_t periodo;

	/* Analiza los valores de la señal PWM */
	Analiza_PWM(valor_amplitud, valor_duty_cycle, valor_frec,
			    &valor_dc, &valor_t_alto, &periodo);

	/* Imprime los resultados */
	printf("El valor promedio del voltaje es: %d V \n", valor_dc);
	printf("El periodo de la función es %d microsegundos \n", periodo);
	printf("El tiempo en alto de la función es %d microsegundos \n", valor_t_alto);

	/* Fin del programa */
	return 0;
}


/* Definición de funciones */

void Analiza_PWM(uint32_t amplitud, uint32_t duty_cycle, uint32_t frecuencia,
		         uint32_t *vdc, uint32_t *t_alto, uint32_t *periodo){

	/* Calcula el voltaje promedio y almacena el resultado en la variable
	 * hacia la que apunta "vdc" */
	*vdc = (amplitud * duty_cycle)/100;
	/* Calcula el periodo y almacena el resultado en la variable hacia la que
	 * apunta "periodo" */
	*periodo = 1000000 / frecuencia;
	/* Calcula el tiempo en alto de la señal y almacena el resultado en la
	 * variable hacia la que apunta "t_alto" */
	*t_alto = (*periodo * (uint64_t)duty_cycle) / 100;

}
