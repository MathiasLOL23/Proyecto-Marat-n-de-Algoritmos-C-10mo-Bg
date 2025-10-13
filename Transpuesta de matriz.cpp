#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    int matriz[m][n], transpuesta[n][m];

    // Leer matriz
    cout << "Ingrese los elementos de la matriz (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Calcular transpuesta
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrar matriz transpuesta
    cout << "La matriz transpuesta (" << n << "x" << m << ") es:\n";
