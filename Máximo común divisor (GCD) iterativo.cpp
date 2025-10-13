#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese dos números enteros positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Por favor, ingrese números positivos." << endl;
        return 0;
    }

    // Algoritmo de Euclides iterativo
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "El máximo común divisor es: " << a << endl;

    return 0;
}
