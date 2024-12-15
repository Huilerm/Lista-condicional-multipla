#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int horaEntrada, minutoEntrada, horaSaida, minutoSaida, entrada, saida, tempoPermanencia, minutosResto, horasResto;
    float totalPagar, valorHora;

    printf("Informe a hora e minuto de chegada:\n");
    scanf("%d %d", &horaEntrada, &minutoEntrada);
    printf("Informe a hora e minuto de saída:\n");
    scanf("%d %d", &horaSaida, &minutoSaida);

    entrada=(horaEntrada*60)+minutoEntrada;
    saida=(horaSaida*60)+minutoSaida;
    tempoPermanencia=saida-entrada;

    if(tempoPermanencia<0){
        tempoPermanencia=tempoPermanencia+(24*60);
    }
    if(tempoPermanencia<=60){
        totalPagar=1.00;
    }else if(tempoPermanencia>60 && tempoPermanencia<=120){
        totalPagar=2.00;
    }else if(tempoPermanencia>120 && tempoPermanencia<=180){
        totalPagar=4.20;
    }else if(tempoPermanencia>180 && tempoPermanencia<=240){
        totalPagar=5.60;
    }else if(tempoPermanencia>240 && tempoPermanencia<=300){
        totalPagar=10.00;
    }else{
        minutosResto=tempoPermanencia-300;
        horasResto=(minutosResto+59)/60;
        totalPagar=10.00+(horasResto*2);
    }

    printf("Preço total a pagar:\n%.2f\n", totalPagar);

system("pause");
return 0;
}
