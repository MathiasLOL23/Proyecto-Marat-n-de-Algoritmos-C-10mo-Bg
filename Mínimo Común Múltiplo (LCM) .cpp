#include <iostream>
using namespace std;

// Reutilizamos función para MCD iterativa o recursiva
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Ingrese dos números enteros positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Por favor, ingrese números positivos." << endl;
        return 0;
    }

    int resultado_mcd = mcd(a, b);
    int lcm = (a / resultado_mcd) * b;  // Evitar overflow

    cout << "El mínimo común múltiplo (LCM) es: " << lcm << endl;

    return 0;
}
