#include<iostream>
using namespace std;

int main()
{
  char tablica[200];
	cout<<"Tekst na makymalnie 200 wyrazow "; 
    	cin.getline(tablica,200);
    	for(int i= 0; i<strlen(tablica);i++){
    		if (tablica[i] == ' ', tablica[i] == '.'){
    			tablica[i] = '-';
    		}
    	}
    cout<<"Zmodyfikowany tekst: "<<tablica<<endl;
	

	return 0;
}
//strlen - liczy znaki do napotkania /0