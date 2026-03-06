#include <iostream>

using namespace std;

// Definição da struct peixe
struct peixe {
    char nome[20];
    float peso;
    int tamanho;
};

// Função que recebe um peixe por valor
void exibirPeixe(peixe p) {
    cout << "Nome: " << p.nome << endl;
    cout << "Peso: " << p.peso << " kg" << endl;
    cout << "Tamanho: " << p.tamanho << " cm" << endl;
    cout << "---------------------------" << endl;
}

int main() {
    peixe meuPeixe = {"Salmão", 12.5, 40}; // Criando um peixe

    exibirPeixe(meuPeixe); // Chamando a função

    return 0;
}
