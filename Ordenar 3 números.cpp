#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese tres números enteros:\n";
    cin >> a >> b >> c;

    // Ordenar usando comparaciones simples
    int temp;
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }

    cout << "Números ordenados de menor a mayor: " << a << " " << b << " " << c << endl;

    return 0;
}
