#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    int number;
    double division;
    
    cin >> number;

    for (int i = 1; i <= number; i++) {
        division = division + (1.0/i);
    }
    cout << fixed << setprecision(4);
    cout << division << '\n';
}