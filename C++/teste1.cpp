#include<iostream>
using namespace std;

int main() {
    int m = 3, n = 3;  // Número de linhas e colunas
    int** matriz = new int*[m];  // Cria um array de ponteiros para linhas

    // Aloca memória para as colunas de cada linha
    for(int i = 0; i < m; i++) {
        matriz[i] = new int[n];
    }

    // Inicializando a matriz
    int contador = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            matriz[i][j] = contador++;
        }
    }

    // Imprimindo a matriz
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Libera a memória
    for(int i = 0; i < m; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    
    return 0;
}
