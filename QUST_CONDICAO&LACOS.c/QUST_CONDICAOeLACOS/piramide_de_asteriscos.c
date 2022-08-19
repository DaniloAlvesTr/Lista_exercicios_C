#include <stdio.h>
int main()
{
    int i, j, num;

    printf("digite o numero de linhas: ");
    scanf("%d", &num);

    for(i = 1; i<=num; i++){
        for(j = i; j<=num-1; j++){
            printf(" ");
        }

        for(j = 1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n\n");
    }


    return 0;
}