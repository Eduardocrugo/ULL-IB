#include <iostream>

using namespace std;

int main() {
  int i, x, y;
  cin >> x >> y;
  if (x < y) {
    cout << x << ',';
    for ( i = x+1; i <= y-1; i++) {
      cout << i << ',';
    }
    cout << i << '\n';
  }
  if (x == y){
    cout << x << '\n';
  }
  if ( x > y){
    cout << '\n'
  }
  return 0;
}