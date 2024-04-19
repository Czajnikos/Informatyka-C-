#include <iostream>
using namespace std;
int suma(int a, int b){
  return a + b;
}
int main() {
  int a = 2.5, b = 4.5;
  cout << suma(a, b) << endl;
  double c = 2.5, d = 4.5;
  cout << suma(c, d) << endl;
  system("pause");
  return 0;
}