#include <iostream>
using namespace std;

int main () {
int num1, num2, res, a, c;
  cout << "Escribe el numero mas bajo del intervalo: ";
  cin >> num1;
  cout << "Escribe el numero mas alto del intervalo: ";
  cin >> num2;
  c = 0;
  res = 0;
  a = num1 + c;

  if (num1 <= num2) {
  while (a < num2) {
    a = num1 + c;
    res = res + a;
    c = c + 1;
  }
  cout << "La suma de todos los numeros dentro del intervalo es: ";
  cout << res << endl;

} else {
  cout << "El primer numero debe ser mas chico que el segundo, por favor intentalo de nuevo.";
  cout << endl;
  main ();
}
}
