#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float n1, n2, n3, maior, menor, meio;
    printf("Informe os tr�s n�meros:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1==n2 && n2==n3 && n3==n1){
        printf("Todos os n�meros s�o iguais.\n");
    }else{
        if(n1>n2 && n1>n3){
        maior=n1;
    }else if(n2>n1 && n2>n3){
        maior=n2;
    }else{
        maior=n3;
    }

    if(n1<n2 && n1<n3){
        menor=n1;
    }else if(n2<n1 && n2<n3){
        menor=n2;
    }else{
        menor=n3;
    }

    if (n1!=maior && n1!=menor) {
        meio=n1;
    } else if (n2!=maior && n2!=menor) {
        meio=n2;
    } else {
        meio=n3;
    }

    printf("A ordem crescente �: %.2f %.2f %.2f.", menor, meio, maior);
    }


system("pause");
return 0;
}
