#include <iostream>
using namespace std;

// Función recursiva para obtener el n-ésimo término de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;      // Caso base
    else if (n == 1) return 1; // Caso base
    else return fibonacci(n - 1) + fibonacci(n - 2); // Recursión
}

int main() {
    int n;

    cout << "Ingrese el número de términos de Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número positivo mayor que cero." << endl;
    } else {
        cout << "Secuencia de Fibonacci: ";
        for (int i = 0; i < n; ++i) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
