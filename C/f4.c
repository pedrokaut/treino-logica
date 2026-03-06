#include <stdio.h>

int masc(char nome[]);
int fem();

int main(){
  char sex;
  char nome[10];

  printf("informe seu nome: ");
  scanf(" %[^\n]", &nome);
  printf("\ninforme seu sexo: ");
  scanf(" %c", &sex);

  if(sex == 'M' || sex == 'm'){
    masc(nome);
  } else if (sex == 'F' || sex == 'f'){
    fem();
  } else{
    printf("\nInforme um sexo válido");
  }
  
  
  return 0;
}

int masc(char nome[]){
  printf("%s ", nome);
  printf("vc esta apto a receber um aumento");
  

}

int fem(){
  printf("vc n esta apto a receber aumento");

}