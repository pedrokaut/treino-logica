#include <stdio.h>
int fatorial(int n){
    int i;
    int aux=1;
    if(n<0){
        
        printf("digite um numero valido\n");
        return-1;
    }else{
    for(i=1;i<=n;i++){
         aux = aux *i;
    }
    return aux;
    }
}

int main(){
    int f,n;
    printf("digite um numero: ");
    scanf("%d",&n);
    
    f=fatorial(n);

    printf("o fatorial de %d e %d",n,f);
    
    return 0;
}