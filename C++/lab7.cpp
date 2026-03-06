#include <iostream> 

using namespace std; 

// Estrutura para armazenar cor usando união 

union Cor { 

    struct { unsigned char r, g, b, a; }; // 4 bytes individuais (RGBA) 

    unsigned int valor; // Representação de 32 bits 

}; 

// Função para ler cor no formato RGBA 

void LerCorRGBA(Cor *c) { 

    cout << "Digite uma cor no formato RGBA: "; 

    cin >> (int&)c->r >> (int&)c->g >> (int&)c->b >> (int&)c->a; 

} 

// Função para ler cor no formato inteiro de 32 bits 

void LerCorInt(Cor *c) { 

    cout << "Digite uma cor no formato Int32: "; 

    cin >> hex >> c->valor; // Lê o valor em hexadecimal 

} 

int main() { 

    Cor cor; // Variável de cor 

    // Ler e exibir cor no formato RGBA 

    LerCorRGBA(&cor); 

    cout << "Cor em 32 bits: " << hex << cor.valor << endl; 

    // Ler e exibir cor no formato Int32 

    LerCorInt(&cor); 

    cout << "Cor em RGBA: " << (int)cor.r << " " << (int)cor.g << " " << (int)cor.b << " " << (int)cor.a << endl; 

    return 0; 

} 