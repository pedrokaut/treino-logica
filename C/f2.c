#include <stdio.h>
void  resultado (int a){
    if(a % 5 == 0){
        printf("esse numero e multiplo de 5");
    }
}
int main(){
    int a;
    printf("digite um numero ");
    scanf("%d",&a);
    resultado(a);
    return 0;
}