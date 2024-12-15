#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float n1, n2, n3, med;
    printf("Informe as três notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    med=(n1+n2+n3)/3;

    if(med>=7){
        printf("Aprovado.\n");
    }else if(med>=5 && med<7){
        printf("Recuperação.\n");
    }else{
        printf("Reprovado.\n");
    }


system("pause");
return 0;
}
