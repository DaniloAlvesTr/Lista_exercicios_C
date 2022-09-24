#include <stdio.h>
#define TAM 10
int rotaciona(int v[], int num){
    int i, aux,j;
    printf("vetor sem modificacao\n\n");
    for(i = 0; i<TAM; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    for(i = 0; i<num; i++){
        aux = v[TAM-1];
        for(j = 9; j>0; j--){
            v[j] = v[j-1];
        }
        v[0] = aux;
        }
        printf("\nvetor modificado\n\n");
    for(i = 0; i<TAM; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

}
int main(){
int v[TAM];
    int vetor[TAM];
    int vezes;
    for(int i = 0; i<TAM; i++){
        printf("digite o valor da posicao %d: ",i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero de rotacoes do vetor: ");
    scanf("%d", &vezes);
    rotaciona(vetor,vezes);
}