#include <stdio.h>
int main()
{
    int i, num, opcao;
    
    printf("TABUADA\n");
  
    printf("digite o numero: ");
    scanf("%d", &num);
    printf("\n");
    printf("SOMA\n\n");

    for(i = 0;i <= 10; i++){
        printf("%d + %d = %d\n\n", num, i, num + i);
    }

    printf("SUBTRACAO\n\n");
    for(i = 0;i <= 10; i++){
        printf("%d - %d = %d\n\n", num, i, num - i);
    }

    printf("MULTIPLICACAO\n\n");
    for(i = 0;i <= 10; i++){
        printf("%d * %d = %d\n\n", num, i, num * i);
    }

    printf("DIVISAO\n\n");
    for(i = 1;i <= 10; i++){
        printf("%d / %d = %d\n\n", num, i, num / i);
    }
   
    return 0;
}