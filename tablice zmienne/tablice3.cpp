#include <iostream>
using namespace std;
 
int main(){
	int liczby[5];
	cout << "Wprowadz 5 liczb: " << endl;
	for (int i = 0; i<5; i++){
		cin >> liczby[i];
	}
	cout << "Podane liczby: " << endl;
		for(int i = 4; i >= 0; i-=1)
			cout << liczby[i] << " ";
	return 0;
}