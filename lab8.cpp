#include <iostream>
#include <cstring>

using namespace std;

struct Tigela {
    char estado[10];
    char tipo[10];
};

void Fome(Tigela *t) {
    strcpy(t->estado, "vazia");
}

int main() {
    Tigela t = {"cheia", "canja"};

    cout << "Antes da janta: " << t.estado << " de " << t.tipo << endl;
    
    Fome(&t);

    cout << "Depois da janta: " << t.estado << " de " << t.tipo << endl;

    return 0;
}

