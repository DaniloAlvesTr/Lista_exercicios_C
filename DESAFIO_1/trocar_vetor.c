int trocarvetor(){
    int v[16];
    int i,aux;
    int lim = (15/2)+1;
    for(i = 0; i<16; i++){
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i<16/2; i++){
        aux = v[i];
        v[i] = v[lim];
        v[lim] = aux;
        lim++;
    }
    for(i = 0; i<16; i++){
        printf("v[%d] = %d\n",i,v[i]);      
    }
}

int main(){
    /*Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 ultimos e vice-versa*/
    trocarvetor();
}