#include <stdio.h>
int main()
{
    int i, j, num, c = 0;

    printf("digite o numero de linhas: ");
    scanf("%d", &num);

    for(i = 1; i<=num; i++){
        for(j = 1; j<=i; j++){
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }


    return 0;
}