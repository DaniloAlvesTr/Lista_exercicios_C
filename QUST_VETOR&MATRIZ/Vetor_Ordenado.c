#include <stdio.h>
#define TAM 10
int crescente(int v[]){
    int i, j,aux;
    for(i = 0; i<TAM; i++){
        for(int j=i+1;j<TAM;j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }   
}
int decrescente(int v[]){
    int i, j,aux;
    for(i = 0; i<TAM; i++){
        for(int j=i+1;j<TAM;j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }    
}

void print(int v[]){
    int i;
    for(i = 0;i<TAM;i++){
        printf("v[%d] = %d\n",i,v[i]);
    }
}

int main(){
    int vet[TAM];
    int i;
    for(int i = 0; i<TAM; i++){
        printf("digite o valor %d: ",i);
        scanf("%d", &vet[i]);
    }

    crescente(vet);
    printf("\nOrdem Crescente\n");
    print(vet);
    decrescente(vet);
    printf("\nOrdem Decrescente\n");
    print(vet);   

}