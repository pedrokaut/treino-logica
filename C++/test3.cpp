#include <iostream>
using namespace std;

int main() {
    int *p = new int; // Alocação dinâmica em C++

    if (!p) {
        cout << "Falha na alocação de memória" << endl;
        return 1;
    }

    cout << "Digite um número: ";
    cin >> *p; // Correto: usando *p para armazenar o valor

    cout << "Valor digitado: " << *p << endl;

    delete p; // Liberando memória

    // Nova alocação
    p = new int;

    if (!p) {
        cout << "Falha na alocação de memória" << endl;
        return 1;
    }

    *p = 50; // Definindo um valor fixo
    cout << "Novo valor: " << *p << endl;

    delete p; // Liberando memória novamente

    return 0;
}
