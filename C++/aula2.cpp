#include<iostream>
using namespace std;
struct jogador{
    char nome[50];
    float salario;
    unsigned gols;
};
int main(){
   jogador pele;
    //cout <<pele.nome << endl;
    //cout <<pele.salario<<endl;
    //cout<<pele.gols<<endl;
    jogador* ptr = &pele;
    cout << ptr->nome << endl;
    cout << ptr->salario<< endl;
    cout << ptr->gols<<endl;
    return 0;

}