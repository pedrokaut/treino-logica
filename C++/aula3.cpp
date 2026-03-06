#include<iostream>
using namespace std;
struct jogador{
    char nome[50];
    float salario;
    unsigned gols;
};
int main(){
    jogador time[11];
    jogador* goleiro = time;
    cout << "digite o nome , salario e gols de dois jogadores:"<< endl;
    cin>> time[0].nome >> time[0].salario >> time[0].gols;
    cin>> time[1].nome >> time[1].salario >> time[1].gols;
    cout<<"O goleiro é: "<< goleiro->nome << endl;
}