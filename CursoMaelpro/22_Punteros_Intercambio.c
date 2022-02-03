/* Ejercicio 01:

Se requiere implementar una función que intercambie los valores almacenados en
2 variables locales de tipo entero de 32 bits (con signo). Por ejemplo: si antes
de invocar a la función se tienen las variables locales a = 3 y b = 10, después
de invocar la función los valores de las variables deben ser a = 10 y b = 3.
Utilizar la función printf() para verificar su funcionamiento.
 */

/* Inclusiones */
#include<stdio.h>
#include<stdint.h>

/* Declaración de funciones (prototipos) */
void Intercambia_Valores(int32_t *a,int32_t *b);

/* Función principal */

int main(int argc,char *argv){
    int32_t x=2,
            y=10;
    int32_t ptr_x=&x,
            ptr_y=&y;

    printf("Antes de entrar a la funcion:\n");
    printf("x=%d, y=%d\n",x,y);
    Intercambia_Valores(ptr_x,ptr_y); //O tambien Intercambia_Valores(&x,&y);
    printf("Despued de entrar a la funcion:\n");
    printf("x=%d, y=%d\n",x,y);

    return 0;
}

/* Definición de funciones */
void Intercambia_Valores(int32_t *a,int32_t *b){
    int32_t aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}