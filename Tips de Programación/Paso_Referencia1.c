#include<stdio.h>
#include<stdlib.h>

/*
    Paso de argumentos a funciones:
    Existen 2 maneras con las cuales se pueden pasar 
    argumentos a una función cuando la mandamos a
    llamar:
    - Paso por valor:
            -cada vez que llamamos a una funcion,se crean
            copias de cada una de los parametros que son 
            pasados  a la funcion.
            -solo afectamos a la copias de las variables,
            mas no directamente a la variable
    
    - Paso por referencia:
            -cada vez que llamamos a la funcion, los 
            parametros son pasados a la funcion
            directamente haciendo uso de apuntadores(punteros)
            -con este metodo se modifican directamente
            el valor de las variables.

            Casos tipicos de uso:
            -Pasar grandes cantidades de informacion a una
            funcion.

            -Pasar arreglos de cualquier tipo a una funcion
*/

/*
 //paso por valor:
int duplica(int val){
    return val*2;
}
int main(){
    int x = 10,resultado;
    printf("El valor de x es:%d\n",x);
    printf("El valor de retorno de la funcion es:%d\n",duplica(x));
    printf("El valor de x despues de llamar la funciones: %d",x);//el valor de x no cambia ya que al llamar a la funcion solo afecta a la copia de la variable mas no a la variable en si.


    //system("pause");
    return 0;
} 
*/


//paso por referencia.
void duplica(int *val){
    *(val)*=2;
}
int main(){
    int x = 10,resultado;
    printf("El valor de x es:%d\n",x);
    duplica(&x);//enviando la direccion (&)de la variable para que afecte directamente
    printf("El valor de x despues de llamar la funciones: %d",x);//el valor de x no cambia ya que al llamar a la funcion solo afecta a la copia de la variable mas no a la variable en si.
    return 0;
}