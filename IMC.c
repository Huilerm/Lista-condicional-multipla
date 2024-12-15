#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float peso, altura, imc;
    printf("Informe o seu peso:\n");
    scanf("%f", &peso);
    printf("Informe a sua altura:\n");
    scanf("%f", &altura);
    imc=peso/(altura*altura);

    if(imc>=30){
        printf("Obesidade.\n");
    }else if(imc>=25 && imc<=29.9){
        printf("Sobrepeso.\n");
    }else if(imc>=18.5 && imc<=24.9){
        printf("Normal.\n");
    }else{
        printf("Abaixo do peso.\n");
    }


system("pause");
return 0;
}

