#include <iostream>
using namespace std;

// Función recursiva para calcular el MCD
int mcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return mcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Ingrese dos números enteros positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Por favor, ingrese números positivos." << endl;
        return 0;
    }

    cout << "El máximo común divisor (MCD) es: " << mcd(a, b) << endl;

    return 0;
}
