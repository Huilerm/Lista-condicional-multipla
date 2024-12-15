#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int idade, tempo;
    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    printf("Informe o tempo de trabalho:\n");
    scanf("%d", &tempo);

    if(idade>=65 && tempo>=30){
        printf("Pode se aposentar.\n");
    }else if(idade>=60 && tempo>=25){
        printf("Pode se aposentar.\n");
    }else{
        printf("Não pode se aposentar.\n");
    }


system("pause");
return 0;
}
