#include <stdio.h>
int main()
{
    int i, soma = 0,somavalores = 0, quadSoma = 0, dife = 0;

    for(i = 1; i<=10 ;i++){
        soma = soma + pow(i,2);
        somavalores += i;       
    }
    quadSoma = pow(somavalores,2)+1;
    
    dife = quadSoma - soma;
    printf("%d\n",soma);
    printf("%d\n", quadSoma);
    printf("%d", dife);
}