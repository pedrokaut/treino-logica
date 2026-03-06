#include <iostream>

using namespace std;

void ordenar(int *vet1, int *vet2, int tamanho)
{
    int resultado[2 * tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        resultado[i] = *(vet1 + i);
        resultado[tamanho + i] = *(vet2 + i);
    }

    // Ordenação com Bubble Sort
    for (int i = 0; i < 2 * tamanho - 1; i++)
    {
        for (int j = 0; j < 2 * tamanho - i - 1; j++)
        {
            if (resultado[j] > resultado[j + 1])
            {
                int temp = resultado[j];
                resultado[j] = resultado[j + 1];
                resultado[j + 1] = temp;
            }
        }
    }

    cout << "Saída: ";
    for (int i = 0; i < 2 * tamanho; i++)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor1[5] = {2, 5, 9, 8, 3};
    int vetor2[5] = {7, 4, 1, 10, 6};

    ordenar(vetor1, vetor2, 5);

    return 0;
}