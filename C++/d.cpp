#include <iostream>

void alterarValor(int* ptr) {
    *ptr = 20; // Altera o valor do inteiro para o qual o ponteiro aponta
}

int main() {
    int valor = 10;
    int *ptr = &valor; // Ponteiro ptr aponta para o endereço de valor

    std::cout << "Valor antes da função: " << valor << std::endl;
    std::cout << "Endereço de valor: " << &valor << std::endl;
    std::cout << "Conteúdo do ponteiro ptr: " << ptr << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;

    alterarValor(ptr); // Chama a função passando o ponteiro

    std::cout << "Valor após a função: " << valor << std::endl;
    std::cout << "Valor apontado por ptr após a função: " << *ptr << std::endl;

    return 0;
}