#include <stdio.h>
int main(){
    int a,b,c,maior;
    printf("digite 3 valores:\n");
    scanf("%d %d %d", &a,&b,&c);

    maior = a;

    if(b>a && b>c){
      maior = b;}
    else if(c>a){
      maior = c;}

    printf("o maior valor é: %d", maior);

}