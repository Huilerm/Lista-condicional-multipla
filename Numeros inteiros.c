#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int n1, n2;
    printf("Informe os dois n�meros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1%2==0 && n2%2==0){
        printf("Ambos s�o pares.\n");
    }else if(n1%2!=0 && n2%2!=0){
        printf("Ambos s�o �mpares.\n");
    }else{
        printf("Um � par e o outro � �mpar.\n");
    }


system("pause");
return 0;
}
