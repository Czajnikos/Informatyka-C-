#include <iostream>
using namespace std;

struct DDT
  {
  
    string nazwa;
    string waga;
    string wiek;
    string status;

};

int main()
{
    
    DDT Zwierze[ 5 ];
    cout << "Wprowadz dane.\n";
   
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Podaj nazwe: ";
        cin >> Zwierze[ licz ].nazwa;
        cout << "Ppdaj wage: ";
        cin >> Zwierze[ licz ].waga;
        cout << "Podaj wiek: ";
		cin >> Zwierze[ licz ].wiek;
	}
	for ( short licz = 0; licz <5; licz++){
		cout << "Ziwerze nr " << licz + 1
		<< "\tNazwa: "<< Zwierze[ licz ].nazwa
		<< "\tWaga (gram): " << Zwierze[licz].waga
		<< "\tWiek (tygodnie):" << Zwierze[ licz ].wiek
		<< endl;
	}
	return 0;

}