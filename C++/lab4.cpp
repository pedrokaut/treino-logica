#include <iostream>
using namespace std;
// Função que recebe um ponteiro e incrementa o valor diretamente
void mais(int* num) {
    (*num)++; // Incrementando diretamente o valor apontado
}
// Função que recebe um número por valor e retorna o número incrementado
int incrementa(int num) {
    return num + 1; // Retorna o número incrementado
}
int main() {
    int valor;
    cout << "Digite um valor: ";
    cin >> valor;
    // Chama a função que modifica diretamente o valor usando ponteiro
    mais(&valor);
    cout << "Resultado depois do Mais: " << valor << endl;
    // Chama a função que retorna um valor incrementado
    valor = incrementa(valor);
    cout << "Resultado depois do Incrementa: " << valor << endl;
    return 0;
}