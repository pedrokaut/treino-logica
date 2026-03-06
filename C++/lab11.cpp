#include <iostream>
#include <string>
using namespace std;
// Enumeração para o tipo de imagem
enum TipoImagem { JPG, PNG, BMP };
// Estrutura para armazenar os detalhes da imagem
struct Imagem {
    char nome[100];
    int altura;
    int largura;
    TipoImagem tipo;
};
// Função que exibe os detalhes da imagem
void Detalhes(const Imagem* img) {
    // Array para converter o enum em string
    const string tipos[] = {"JPG", "PNG", "BMP"};
    // Exibe os detalhes no formato solicitado
    cout << "A imagem \"" << img->nome << "\" com tamanho " 
         << img->largura << "x" << img->altura 
         << " tem formato " << tipos[img->tipo] << endl;
}
int main() {
    // Inicialização da variável do tipo Imagem
    Imagem img = {"backg.png", 1080, 1920, PNG};
    // Chamada da função Detalhes passando o endereço da variável img
    Detalhes(&img);
    return 0;
}