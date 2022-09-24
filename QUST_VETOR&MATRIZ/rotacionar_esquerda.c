#include <stdio.h>
#define TAM 10
int rotaciona(int v[], int num){
    
    int i,j;
    int aux;
    printf("vetor sem modificacao\n");
    for(i = 0; i<TAM; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    for(i = 0; i<num; i++){
        aux = v[0];
        for(j = 0; j<TAM-1; j++){
            v[j] = v[j+1];
        }
        v[TAM-1] = aux;
        }
    printf("vetor modificado\n");
    for(i = 0; i<TAM; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
}
int main(){
    int vetor[TAM];
    int vezes;
    for(int i = 0; i<TAM; i++){
        printf("digite o valor %d: ",i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero de rotacoes do vetor: ");
    scanf("%d", &vezes);
    rotaciona(vetor,vezes);
}
