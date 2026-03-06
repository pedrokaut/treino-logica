#include<stdio.h>
int main(){
    int total=0;
    float n,m=0,soma=0;
    do{
        printf("digite um valor: ");
        scanf("%f",&n);
        if(n>0){
            soma+=n;
            total++;
        }
        m=soma/total;

    }while(n>0);
    printf("soma: %.2f media: %.2f total: %d",soma,m,total);
    return 0;
}