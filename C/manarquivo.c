#include<stdio.h>
int main(){
FILE *arquivo;
char linha [100];
arquivo = fopen("arquivo.txt", "w");    
while (fgets(linha, sizeof(linha), arquivo) != NULL){
    printf("%s", linha);
}
//fprintf(arquivo, "Esta eh uma linha de exemplo. \n");
//fprintf(arquivo, "Esta eh outra linha de exemplo. \n");
fclose( arquivo);
}