//verificar quanto vezes um numero se repete no vetor.
#include <stdio.h>
#include <time.h>
#define TAM 9
int repetir(int num, int v[TAM]){

    int cont = 0;
    for(int i = 0; i < TAM; i++){
        if(num == v[i]){
            cont++;         
        }        
}
        return cont;
}

int main(){
    int v[TAM];
    int num, cont = 0, valor;
    srand(time(NULL));//gerar valores aleatórios

    for(int i = 0; i < TAM; i++){
        v[i] = rand()%10;//gerar valores entre 0-9
    }  
    printf("digie um valor: ");
    scanf("%d", &num);

    for(int i = 0; i < TAM; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
   
    valor = repetir(num,v);
    printf("O numero %d, se repetiu %d vezes",num, valor);
   
}