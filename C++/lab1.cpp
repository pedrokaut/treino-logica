#include <iostream>
#include <cstring> // Para manipulação de strings

using namespace std;

// Definição da struct peixe
struct peixe {
    char nome[20];   // Nome do peixe (string)
    float peso;      // Peso do peixe (ponto flutuante)
    int tamanho;     // Comprimento do peixe (inteiro)
};

int main() {
    // Criando um array de peixes (Parte A)
    peixe peixes[3] = {
        {"Tilápia", 10.5, 20},
        {"Dourado", 20.3, 30},
        {"Pintado", 30.7, 40}
    };

    // Exibindo os dados dos peixes
    for (int i = 0; i < 3; i++) {
        cout << "Nome: " << peixes[i].nome << endl;
        cout << "Peso: " << peixes[i].peso << " kg" << endl;
        cout << "Tamanho: " << peixes[i].tamanho << " cm" << endl;
        cout << "------------------------" << endl;
    }

    // Parte B: Criando um ponteiro para um peixe
    peixe* ptr = new peixe;

    // Atribuindo valores ao peixe usando o ponteiro
    strcpy(ptr->nome, "Salmão");
    ptr->peso = 25.8;
    ptr->tamanho = 50;

    // Exibindo os dados do peixe alocado dinamicamente
    cout << "\nPeixe alocado dinamicamente:" << endl;
    cout << "Nome: " << ptr->nome << endl;
    cout << "Peso: " << ptr->peso << " kg" << endl;
    cout << "Tamanho: " << ptr->tamanho << " cm" << endl;

    // Liberando a memória alocada dinamicamente
    delete ptr;

    return 0;
}
