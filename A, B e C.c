#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float l1, l2, l3;
    printf("Informe o valor de cada lado do tri�ngulo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if(l1==l2 && l2==l3 && l3==l1){
        printf("Os lados do tri�ngulo � equil�tero.\n");
    }else if(l1==l2 && l1!=l3){
        printf("Os lados do tri�ngulo � is�scele.\n");
    }else{
        printf("Os lados do tri�ngulo � escaleno.\n");
    }


system("pause");
return 0;
}
