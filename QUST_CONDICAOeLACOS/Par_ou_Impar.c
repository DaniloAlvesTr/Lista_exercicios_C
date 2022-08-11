#include <stdio.h>
int main()
{
    int num, pares = 0, qtde_dados=0;
    printf("---se quiser parar, digite 1000---\n");
    while(num != 1000){       
        printf("digite os valores: ");
        scanf("%d", &num);
        qtde_dados++;
        if(num % 2 == 0){
            pares++;
            }                                              
    }
    printf("O numero de dados lidos foi de: %d\n", qtde_dados-1);
    printf("A quantidade de pares foi de: %d", pares-1);
    
    

    return 0;
}