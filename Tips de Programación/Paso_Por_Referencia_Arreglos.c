#include<stdio.h>

void imprimir(int* arreglo, int tam){
    for(int i=0;i<tam;i++){
        printf("%d, ",*(arreglo+i));
    }
    printf("\n");

}
int main(){
    int x = 10,y;
    int arr[5]={1,2,3,4,5};
    imprimir(arr,5); //se pude obviar "&" ya que un arreglo es un puntero, y no es necesario anteponer &
    return 0;
}