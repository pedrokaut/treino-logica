#include <stdio.h>
int main() {
    int x, *p, **q;  

    p = &x;  // p aponta para x
    q = &p;  // q aponta para p

    x = 10;  // Atribui 10 a x

    printf("Valor de x usando q: %d\n", **q);  

    return 0;  
}
