#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    cout << "Ingrese las dimensiones de la primera matriz (m x n): ";
    cin >> m >> n;

    cout << "Ingrese el número de columnas de la segunda matriz (p): ";
    cin >> p;

    int A[m][n], B[n][p], C[m][p];

    // Leer matriz A
    cout << "Ingrese los elementos de la matriz A (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    // Leer matriz B
    cout << "Ingrese los elementos de la matriz B (" << n << "x" << p << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < p; ++j)
            cin >> B[i][j];

    // Inicializar matriz resultado C en cero
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            C[i][j] = 0;

    // Multiplicar matrices: C = A * B
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
