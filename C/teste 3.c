#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p= (int *)malloc(sizeof(int));
    if(p==NULL){
        printf("falha na alocação de memoria\n");
        return 1;
    }
    //printf("%d",*p);
    scanf("%d",p);
    //*p=30;
    printf("%d\n",*p);
    free (p);
    p=(int *)malloc(sizeof(int));
    if(p==NULL){
        printf("falha na alocação de memoria\n");
        return 1;
    }
    *p=50;
    printf("%d\n",*p);
    free(p);
    return 0;
}