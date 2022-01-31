#include <stdio.h>

void imprime_arreglo(int *data, int tam);
    

int main(){
    int arr[3]={1,2,3};
    printf("El nombre del arreglo contiene: %p\n",arr);
    printf("El nombre del arreglo usando el operador & contiene: %p\n",&arr);
    printf("El nombre del primer elemento del arreglo contiene: %p\n",&arr[0]);

    imprime_arreglo(arr,3);
}

void imprime_arreglo(int *data, int tam){
    for(int i=0; i<tam;i++){
        printf("%i ",*(data+i));
    }
    printf("\n");

}