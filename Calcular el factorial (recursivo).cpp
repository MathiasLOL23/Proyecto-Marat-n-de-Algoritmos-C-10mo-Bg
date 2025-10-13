#include <iostream>
using namespace std;

// Función recursiva para calcular factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    }

    return 0;
}
