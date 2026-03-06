#include <iostream>
using namespace std;
// Definição da struct peixe
struct peixe {
    char nome[20];
    float peso;
    int tamanho;
};

// Função que recebe um ponteiro para peixe
void exibirPeixePonteiro(peixe* p) {
    cout << "Nome: " << p->nome << endl;
    cout << "Peso: " << p->peso << " kg" << endl;
    cout << "Tamanho: " << p->tamanho << " cm" << endl;
    cout << "---------------------------" << endl;
}

int main() {
    peixe meuPeixe = {"Dourado", 15.2, 50}; // Criando um peixe

    exibirPeixePonteiro(&meuPeixe); // Passando o endereço do peixe

    return 0;
}
