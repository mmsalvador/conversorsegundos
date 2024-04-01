#include <stdio.h>
#include <stdlib.h>

int main(){
    int minutos=0,segundos, horas=0;
    printf("Insira o valor em segundos: ");
    scanf("%d",&segundos);

    horas = segundos/3600; //horas
    minutos = (segundos/60)%60;//minutos
    segundos = segundos % 60; // segundos

    printf("HORARIO: %d:%d:%d",horas,minutos,segundos);
}