#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float compra;
    int num;
    printf("Informe o valor da compra:\n");
    scanf("%f", &compra);
    printf("Qual a forma de pagamento:\n 1 - � vista 2 - parcelado em 2x 3 - parcelado em 3x");
    scanf("d", &num);

    if(num==1){
        compra=compra-(compra*0.1);
        printf("O valor a pagar com 10% de desconto �:%2.f", compra);
    }else if(num==2){
        printf("O valor a pagar sem desconto �:%2.f", compra);
    }else{
        compra=compra+(compra*0.05);
        printf("O valor a pagar com acrescimo �:%2.f", compra);
    }


system("pause");
return 0;
}
