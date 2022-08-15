#include <stdio.h>
int main()
{
    int segundos, horas, minutos;
    printf("digite o tempo em segundos:\n-> ");
    scanf("%d", &segundos);
    
    horas = segundos/(60*60);
    segundos = segundos%(60*60);

    minutos = segundos/60;
    segundos = segundos%60;

    printf("%d:%d:%d", horas,minutos,segundos);

    return 0;
}