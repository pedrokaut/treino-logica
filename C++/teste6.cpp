#include<iostream>
using namespace std;
struct jogador{
    char nome[20];
    float salario;
    int gols;
};
int main(){
    struct jogador jogadores[3]={{"ronaldo",1000,10},{"messi",2000,20},{"neymar",3000,30}};
    for(int i=0;i<3;i++){
        cout<<"nome:"<<jogadores[i].nome<<endl;
        cout<<"salario:"<<jogadores[i].salario<<endl;
        cout<<"gols:"<<jogadores[i].gols<<endl;
    }
    return 0;

    
}
