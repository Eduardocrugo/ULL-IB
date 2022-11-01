#include <iostream>
int main() {
    int a = 10;
    int b = 7;
    std::cout << ( a > 4 && b > 7 ) << '\n'; 
    std::cout << ( a > 4 || b > 7 ) << '\n';
    std::cout << (!( a > 4 && b > 7 )) << '\n';
    return 0;
}