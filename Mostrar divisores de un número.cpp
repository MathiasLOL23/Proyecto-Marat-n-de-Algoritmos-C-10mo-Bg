#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 0;
    }

    cout << "Los divisores de " << n << " son: ";

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
