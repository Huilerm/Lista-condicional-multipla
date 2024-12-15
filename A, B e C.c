#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float l1, l2, l3;
    printf("Informe o valor de cada lado do triângulo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if(l1==l2 && l2==l3 && l3==l1){
        printf("Os lados do triângulo é equilátero.\n");
    }else if(l1==l2 && l1!=l3){
        printf("Os lados do triângulo é isóscele.\n");
    }else{
        printf("Os lados do triângulo é escaleno.\n");
    }


system("pause");
return 0;
}
