//pedro victor soares gonçalo
#include <stdio.h>

void funcao_aux_vetor(float vetor[], int i);



int main(){
    float vetor[20];
    int i=0;
    funcao_aux_vetor(vetor, i);
}

void funcao_aux_vetor(float vetor[], int i){
    for(i=0;i<20;i++){
        printf("digite o %d indice: ", i+1);
        scanf("%f", &vetor[i]);
    }


}
