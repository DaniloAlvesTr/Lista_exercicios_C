#include <stdio.h>
int main(){
    int a,b,c,maior;

    scanf("%d%d%d", &a,&b,&c);

    maior = a;

    if(b>a){
        maior = b;}
    else if(c>a){
        maior = c;}

    printf("o maior valor é: %d", maior);

}