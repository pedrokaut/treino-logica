#include<iostream>

using namespace std;

int main() {
    char nome[20]= "lilith";
    cout << nome << endl;

    char* ptr = &nome[1];
    *ptr = 'y';
    cout << ptr << endl;

    nome[3] = 'y';
    cout << nome << endl;
    *ptr = 'i';
    cout << nome << endl;
   
    return 0;
}
