#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;

    // Intercambio sin variable temporal
    a = a + b;  // a ahora es 15
    b = a - b;  // b ahora es 5 (15 - 10)
    a = a - b;  // a ahora es 10 (15 - 5)

    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;

    return 0;
}
