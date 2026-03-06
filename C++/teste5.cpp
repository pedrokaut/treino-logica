#include<iostream>
using namespace std;
struct jogador{
    char nome[20];
    float salario;
    int gols;
};
struct time{
    char nome[20];
    struct jogador capitao;
    
    };
    
int main(){
    struct time t1={"real madrid",{"ronaldo",3500,100}};
    cout<<t1.nome<<endl;
    cout<<t1.capitao.nome<<endl;
    cout<<t1.capitao.salario<<endl;
    cout<<t1.capitao.gols<<endl;
    return 0;
    
        
    }