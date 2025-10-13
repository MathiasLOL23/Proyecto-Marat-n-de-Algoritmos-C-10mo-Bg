#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un número positivo mayor que cero." << endl;
    } else {
        int suma = 0;
        for (int i = 1; i <= n; ++i) {
            suma += i;
        }
        cout << "La suma de los primeros " << n << " enteros es: " << suma << endl;
    }

    return 0;
}
