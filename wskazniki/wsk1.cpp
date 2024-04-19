#include<iostream>
using namespace std;

int main() {
    int x = 15;
    int *wsk = &x; 
    
    printf("Wartosc zmiennej x: %d\n", *wsk); 
    
    return 0;
}
