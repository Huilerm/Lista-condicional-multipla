#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float notas;
    int faltas;
    char categoria;
    printf("Informe a sua nota:\n");
    scanf("%f", &notas);
    printf("Informe a quantidade de faltas:\n");
    scanf("%d", &faltas);

     if(notas>=9 && faltas<=20){
            categoria='A';
        }else{
            categoria='B';
        }

     if(notas>=7.5 && notas<=8.9){
        if(faltas<=20){
            categoria='B';
        }else{
            categoria='C';
        }
        }else if(notas>=5 && notas<=7.4){
        if(faltas<=20){
            categoria='C';
        }else{
            categoria='D';
        }
        }else if(notas>=4 && notas<=4.9){
        if(faltas<=20){
            categoria='D';
        }else{
            categoria='E';
        }
        }else if(notas>=0 && notas<=3.9){
        if(faltas<=20){
            categoria='E';
        }else{
            categoria='E';
        }
     }

    printf("A sua classificação é do tipo: %c\n", categoria);

system("pause");
return 0;
}
