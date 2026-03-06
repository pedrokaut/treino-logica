#include <iostream>

using namespace std;

int main() {
    int* pont; // Ponteiro declarado, mas sem inicialização

    cout << "Endereco armazenado no ponteiro: " << pont << endl;
    cout << "Valor armazenado no endereco apontado: " << *pont << endl; // ERRO AQUI!

    return 0;
}
