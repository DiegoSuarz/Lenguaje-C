#include <stdio.h>
#include <math.h>

//Que hace la variable?
//Es la unica variable con es funcion?
//Si la veo en otra porte del codigo, sigue teniendo sentido?

#define

int contador_revoluciones=0;
const int limite_revoluciones=200;
int sentido_giro_motor=0;

void gestor_cambio_giro(){
    if(sentido_giro_motor==1){
        cambiar_giro(sentido_giro_motor);
        sentido_giro_motor=0;
    }else{
        cambiar_giro(sentido_giro_motor);
        sentido_giro_motor=1;
    }
    contador_revoluciones=0;
}

int main(){
    if(contador_revoluciones>limite_revoluciones){
        gestor_cambio_giro();
    }
    return 0;
}