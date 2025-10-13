#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;

    int temp = a;  // Guardamos el valor de 'a' en 'temp'
    a = b;         // Asignamos el valor de 'b' a 'a'
    b = temp;      // Asignamos el valor guardado en 'temp' a 'b'

    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;

    return 0;
}
