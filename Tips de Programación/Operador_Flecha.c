#include<stdio.h>

struct persona{
    int edad;
    float altura;
};

void aumentar_edad(struct persona* p){
    //Se puede usar las 2 maneras
    //(*p).edad += 10;
    p->edad += 10;
}


int main(){
    struct persona yo;
    yo.edad =26;
    yo.altura=1.68;

    printf("Mi edad es: %i\n",yo.edad);
    printf("Mi altura es: %0.2f\n",yo.altura);

    aumentar_edad(&yo);
    printf("\nMi edad es: %i\n",yo.edad);
    printf("Mi altura es: %0.2f\n",yo.altura);
    return 0;
}

