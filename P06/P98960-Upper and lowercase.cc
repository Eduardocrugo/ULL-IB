#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char letra;
  cin >> letra;
  if (isupper(letra)) {
    letra = letra + 32;
  } else {
    letra = letra - 32;
  }
  cout << letra << '\n';
  return 0;
}