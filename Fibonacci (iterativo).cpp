#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de términos de Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingrese un número positivo mayor que cero." << endl;
    } else {
        long long a = 0, b = 1, siguiente;

        cout << "Secuencia de Fibonacci: ";

        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                cout << a << " ";
                continue;
            } else if (i == 2) {
                cout << b << " ";
                continue;
            }
            siguiente = a + b;
            cout << siguiente << " ";
            a = b;
            b = siguiente;
        }

        cout << endl;
    }

    return 0;
}
