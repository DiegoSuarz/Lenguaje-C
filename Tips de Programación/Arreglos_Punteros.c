#include<stdio.h>

void imprime_arreglo(int *data, int tam){
    for(int i=0;i<tam;i++){
        printf("%i, ",*(data+i));
    }
    printf("\n");
}

int main(){
    int arr[3]={1,2,3};
    printf("El nombre del arreglo contiene: %p\n",arr);
    printf("La direccion de memoria del arreglo es: %p\n",&arr);
    printf("la primera direccion del arreglo es: %p\n",&arr[0]);
    //todos tienen la misma direccion de memoria, cualquier nomenclatura es util
    imprime_arreglo(arr,3);
    return 0;
}