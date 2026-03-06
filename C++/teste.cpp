#include<iostream>
using namespace std;

int main(){
    int x,y,z=0;
    int *ptr;
    string nome;
    cout << "digite seu nome: ";
    cin >> nome;
    if(nome=="pedro"){
    cout << "digite um valor para x: ";
    cin >> x;
    cout << "digite um valor para y: ";
    cin >> y;
    for(int i = 0; i < y; i++){
        z=z+x;
    }
    cout << z << endl;
     ptr=&z;
    *ptr=20;
    cout << *ptr;
}else{
    return 1;
}
    return 0;


}