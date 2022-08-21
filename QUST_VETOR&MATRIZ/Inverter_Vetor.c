#include<stdio.h>
#define TAM 10
int inverte(int v[], int top){
    int aux,i;
    for(i = 0; i<TAM/2; i++){
        aux = v[i];
        v[i] = v[top];
        v[top] = aux;
        top--;
    }
    
}
void print(int v[], int top){
    int i;
    for(i=0;i<TAM;i++){
        printf("v[%d] = %d\n",i,v[i]);
    }
}

int main()
{
    int vet[TAM];
    int fim = TAM-1;

    for(int i = 0; i<TAM; i++){
        printf("digite o valor %d: ",i);
        scanf("%d", &vet[i]);
    }
    printf("\nvetor sem modificacao!\n");
    print(vet,fim);
    inverte(vet,fim);
    printf("\nVetor Invertido\n");
    print(vet,fim);
    
}