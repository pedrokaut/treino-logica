#include <iostream>
using namespace std;
struct Horario {
    int horas, minutos;
};
// Função para mostrar o horário no formato HH:MM
void MostrarHorario(Horario *h) {
    cout << (h->horas < 10 ? "0" : "") << h->horas << ":"
         << (h->minutos < 10 ? "0" : "") << h->minutos << endl;
}
int main() {
    Horario h;
    Horario *ptr = &h;
    // Entrada do usuário
    cout << "Que horas sao? ";
    char separador; // Para capturar o ':'
    cin >> h.horas >> separador >> h.minutos;
    // Incrementando 1 hora
    ptr->horas++;
    cout << "Seu relógio está atrasado, o horário correto é ";
    MostrarHorario(ptr);
    return 0;
}
