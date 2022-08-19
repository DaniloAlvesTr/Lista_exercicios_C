#include <stdio.h>
int tempo(int segundos){
    int horas, minutos;

    horas = segundos/(60*60);
    segundos = segundos%(60*60);

    minutos = segundos/60;
    segundos = segundos%60;

    printf("%d:%d:%d", horas,minutos,segundos);
}

int main()
{
    int seg, horas, minutos;
    printf("digite o tempo em segundos:\n-> ");
    scanf("%d", &seg);
    
    tempo(seg);

    return 0;
}