#include <iostream>
using namespace std;

int main() {
  int horas, minutos, segundos;
  cin >> horas >> minutos >> segundos;
  ++segundos;
if (segundos == 60){
    ++minutos;
    segundos = 0;
  }
  if (minutos == 60){
    ++horas;
    minutos = 0;
  }
  if (horas == 24){
    horas = 0;
  }
if (horas < 10) cout << 0;
    cout << horas << ':';
    if (minutos < 10) cout << 0;
    cout << minutos << ':';
    if (segundos < 10) cout << 0;
    cout << segundos << endl;
  return 0;
}