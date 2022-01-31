#include <stdio.h>

int edad=10, estatura= 181;
float temp=32.5625;
float temp2=2.5625;
char letra='c';
char nombre[]="Juan";
int contador=0;

int main(){

    printf("Temp: %f",temp);
    printf("\n");
    printf("%s tiene %d años y mide %d cm",nombre,edad,estatura);
    printf("\n");

    for(contador;contador<=25;contador++){
        printf("contador: %02d \n\r",contador);
    }

    printf("Temp: %04.1f \n\r",temp);
    printf("Temp: %04.1f \n\r",temp2);
    
    return 0;

    
}

