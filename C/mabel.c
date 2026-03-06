#include<stdio.h>
void fvet(int vet[]){
    printf("*********************************\n");
    printf("* ESTE PROGRAMA ARMAZENA VALORES*\n");
    printf("*********************************\n\n");
    for(int x=0;x<10;x=x+1){
        printf("Digite um valor: ");
        scanf("%d",&vet[x]);
    }
}
void hightvet(int b[]){
    int maior = -9999;
    for(int x = 0;x<10;x=x+1){
        if(b[x]>maior){
            maior = b[x];
        }
    }
    printf("%d",maior);
}
int main(){
    int vet[10];
    fvet(vet);
    hightvet(vet);
    return 0;
}