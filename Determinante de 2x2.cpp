#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];

    cout << "Ingrese los elementos de la matriz 2x2:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    cout << "El determinante de la matriz es: " << determinante << endl;

    return 0;
}
