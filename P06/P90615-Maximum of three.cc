#include <iostream>

using namespace std;

int main() {
  int numero_1, numero_2, numero_3;
  cin >> numero_1 >> numero_2 >> numero_3;
  if ((numero_1 >= numero_2) && (numero_1 >= numero_3)) {
    cout << numero_1 << '\n';
  } else if ((numero_2 >= numero_1 && numero_2 >= numero_3)) {
    cout << numero_2 << '\n';
  } else {
    cout << numero_3 << '\n';
  }
  return 0;
}