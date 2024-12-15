#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float peso, altura;
    char categoria;
    printf("Informe o seu peso:\n");
    scanf("%f", &peso);
    printf("Informe a sua altura:\n");
    scanf("%f", &altura);

     if(altura<1.20){
        if(peso<=60){
            categoria='A';
        }else if(peso>60 && peso<=90){
            categoria='D';
        }else{
            categoria='G';
        }

    }else if(altura>=1.20 && altura<=1.70){
        if(peso<=60){
            categoria='B';
        }else if(peso>60 && peso<= 90){
            categoria='E';
        }else{
            categoria='H';
        }

    }else{
        if(peso<=60){
            categoria='C';
        }else if(peso>60 && peso<=90){
            categoria='F';
        }else{
            categoria='I';
        }
    }

    printf("A sua classificação é do tipo: %c\n", categoria);

system("pause");
return 0;
}
