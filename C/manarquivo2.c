#include<stdio.h>
int main(){
    FILE *arquivo=fopen("arquivo.txt", "w");
    printf("conteudo do arquivo:\n");
    char c;
    while((c = fgetc(arquivo)) != EOF){
        putchar(c);
    }
    printf("\n");
    fclose(arquivo);
    return 0;

}
