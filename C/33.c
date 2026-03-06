#include <stdio.h>
void  result(int n1,int n2, int r){
        for(int i=1;i<=n1;i++){
            r = r+n2;
        }
            printf("%d",r);
        
}


int main(){
    int n1,n2,r=0;
    printf("digite o primeiro numero e o segundo numero: ");
    scanf("%d%d",&n1,&n2);
    result(n1,n2,r);
    return 0;
}
                              
    