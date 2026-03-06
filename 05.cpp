#include<iostream>
using namespace std;
int main(){
    int x = 68, y; 
    int *p; 
    p = &x; 
    y = *p + 200;//soma o conteudo armazenado no slot que o ponteiro a ponta fazendo com q y seja 268 
    cout << "x: " << x << ", y: " << y << endl; 
      
return 0;
}