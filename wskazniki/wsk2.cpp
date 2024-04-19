#include<iostream>
using namespace std;

void modyfikuj_zmienne(float *a, float *b, float *c) {
    *a += 1;
    *b += 2;
    *c += 3;
}

int main() {
    float a = 1, b = 1, c = 1;
    
    printf("Wartości zmiennych:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);
    printf("c: %.2f\n", c);
    
    modyfikuj_zmienne(&a, &b, &c);
    
    printf("Wartości zmiennych po modyfikacji:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);
    printf("c: %.2f\n", c);
    
    return 0;
}