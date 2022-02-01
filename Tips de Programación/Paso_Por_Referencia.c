#include <stdio.h>

//al pasar parametro por valor se crea una copia del valor de la variable, y al retornor este valor se pierde, la variable original no se afectada
int duplica_valor(int val){
    return val*2;
}

//al pasar el argumento por referencia modificamos directamente el valor de la variable haciendo uso de su direccion de memoria
void duplica_referencia(int* val){
    *(val)*=2;
}

int main(){
    int x=10,y=10;
    printf("Paso de argumento por valor");
    printf("El valor de a es: %d\n",x);
    printf("El valor de retorno de la funcion es: %d\n",duplica_valor(x));
    printf("El valor de x despues de llamar la función es: %d\n\n",x);

    printf("Paso de argumento por referencia\n");
    printf("El valor de a es: %d\n",y);
    duplica_referencia(&y);
    printf("El valor de x despues de llamar la función es: %d\n\n",y);

    return 0;
}