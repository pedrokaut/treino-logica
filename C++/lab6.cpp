#include <stdio.h>
int main() {
    char letra = 'A';  // Criando a variável do tipo char inicializada com 'A'
    char *ptr = &letra; // Criando um ponteiro para a variável

    // Modificando o valor da variável usando o ponteiro
    *ptr = 'B';

    // Exibindo os valores
    printf("Valor da variável: %c\n", letra);
    printf("Valor apontado pelo ponteiro: %c\n", *ptr);

    return 0;
}
