#include<stdio.h>
int main(){
    int n1,n2,n3=0;
 printf("digite o primeiro numero ");
 scanf("%d",&n1);
 printf("digite o segundo numero ");
 scanf("%d",&n2);
 for (int i = 1;i<=n2; i++){
    n3= n3+n1;
 }
 printf("%d",n3);
 return 0;
}