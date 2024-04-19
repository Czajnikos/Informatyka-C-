#include <iostream>


	
const int rozmiarTablicy = 10;


void losujLiczby(int tablica[], int rozmiar) {
    srand; ftime(nullptr);
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 51; 
    }
}

bool sprawdzCzyZgadl(int liczba, int tablica[], int rozmiar, int& licznik) {
    for (int i = 0; i < rozmiar; ++i) {
        if (liczba == tablica[i]) {
            ++licznik;
            return true; 
        }
    }
    return false;
}

int main() {
    int wylosowaneLiczby[rozmiarTablicy];
    losujLiczby(wylosowaneLiczby, rozmiarTablicy);

    int zgadnietaLiczba;
    int licznikProb = 0;

    std::cout << "Witaj w grze! Zgadnij jedną z wylosowanych liczb od 0 do 50." << std::endl;

    do {
        std::cout << "Podaj liczbę: ";
        std::cin >> zgadnietaLiczba;

        if (sprawdzCzyZgadl(zgadnietaLiczba, wylosowaneLiczby, rozmiarTablicy, licznikProb)) {
            std::cout << "Brawo! Zgadłeś liczbę " << zgadnietaLiczba << " po " << licznikProb << " próbach." << std::endl;
        } else {
            std::cout << "Niestety, spróbuj ponownie." << std::endl;
        }

    } while (!sprawdzCzyZgadl(zgadnietaLiczba, wylosowaneLiczby, rozmiarTablicy, licznikProb));

    return 0;
}