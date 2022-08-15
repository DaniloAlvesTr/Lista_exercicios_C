#include <stdio.h>
int main()
{
    int i, a, b, maior,menor, cond;

    while(cond != 0){
        printf("digite dois valores: ");
        scanf("%d %d", &a, &b);
        maior = a;
        if(b > a){
            maior = b;
        }
        menor = a;   
        if(b < a){
            menor = b;
        }
        if(maior % menor == 0){
            printf("os numeros %d e %d sao multiplos!",menor,maior);
        }
        else{
            printf("os numeros %d e %d nao sao multiplos!", menor,maior);
        }
        printf("\npara continuar, aperte 1, para fechar 0:\n-> ");
        scanf("%d", &cond);
        if(cond == 1){
            continue;
}
}
  }