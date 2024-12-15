#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int n1, n2;
    printf("Informe os dois números:\n");
    scanf("%d %d", &n1, &n2);

    if(n1%2==0 && n2%2==0){
        printf("Ambos são pares.\n");
    }else if(n1%2!=0 && n2%2!=0){
        printf("Ambos são ímpares.\n");
    }else{
        printf("Um é par e o outro é ímpar.\n");
    }


system("pause");
return 0;
}
