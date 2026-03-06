#include<stdio.h>
int main(){
    float n,m=0,soma=0,total=0;
    while(1){
        printf("digite um valor");
        scanf("%f",&n);
        if(n>0){
        soma+=n;
        total++;
        }else{
            break;
        }
        m=soma/total;
    }
    printf("media: %.2f soma: %.2f total %.2f",m,soma,total);
    return 0;
}