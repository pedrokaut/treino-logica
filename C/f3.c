#include <stdio.h>

// Função que calcula a área do círculo
double calculaAreaCirculo(double raio) {
    double pi = 3.14159; // Definição da constante pi dentro da função
    return pi * raio * raio; // Multiplica o raio por ele mesmo
}

int main() {
    double raio;
    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio); // Leitura de um valor double para o raio

    double area = calculaAreaCirculo(raio); // Chamada da função
    printf("A área do círculo é: %.2lf\n", area); // Exibe a área com 2 casas decimais

    return 0;
}
