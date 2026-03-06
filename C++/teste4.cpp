#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "digite quantos jogadores tem no seu time: ";
    cin >> n;
     int *p= new int[n];
    if(p==NULL){
     cout << "falha na alocação de memoria" << endl;
     return 1;

    }
    cout << "digite a idade dos jogadores: " << endl;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    cout << "idade dos jogadores: " << endl;
    for(int i=0;i<n;i++){
        cout << "idade dos jogador: "<< i+1 <<": "<< endl;
        cout << p[i]<<endl;
    }

}