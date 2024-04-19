#include<iostream>
using namespace std;


int SumTab(int a[], int size) {
    int suma = 0;
    for (int i = 0; i < size; ++i) {
        suma += a[i];
    }
    return suma;
}

int main() {
    int tablica[5];

    std::cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> tablica[i];
    }


    int wynik = SumTab(tablica, 5);
    std::cout << "Suma wszystkich liczb w tablicy: " << wynik << std::endl;

    return 0;
}