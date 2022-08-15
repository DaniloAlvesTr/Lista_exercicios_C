#include <stdio.h>
int main(){
    /*Faça um programa para calcular a seguinte sequência:
    1) 1 − 2 + 3 − 4 + 5...*/
    
    int i=0, controle = 0, result = 0, num=0, cond;
    while(cond != 0){
        printf("digite um valor: ");
        scanf("%d", &num);
        
        while(i < num){
            if(controle == 0){
                i++;
                result+=i;
                controle=1;
            }
            else{
                i++;
                result-=i;
                controle=0;
              }
            }
      
        printf("o resultado da sequencia é: %d", result);
        printf("\npara continuar, aperte 1, para fechar 0\n-> ");
        scanf("%d", &cond);
        if(cond == 1){
            continue;}
}
  }