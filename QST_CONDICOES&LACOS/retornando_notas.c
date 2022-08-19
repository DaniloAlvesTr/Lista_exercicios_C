#include <stdio.h>
int main()
{
    int num;
    printf("digite um valor do saque: ");
    scanf("%d", &num);
    
    printf("100 %d\n", num/100);
    num = num%100;
   
    printf("50 %d\n", num/50);
    num = num%50;
    
    printf("20 %d\n", num/20);
    num = num%20;
   
    printf("10 %d\n", num/10);
    num = num%10;
    
    printf("5 %d\n", num/5);
    num = num%5;  
  
    printf("2 %d\n", num/2);
    num = num%2;
    
    printf("1 %d\n", num/1);

    
    
    return 0;
}