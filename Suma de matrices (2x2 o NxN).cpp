#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño de las matrices (N x N): ";
    cin >> N;

    int matriz1[N][N], matriz2[N][N], suma[N][N];

    // Leer la primera matriz
    cout << "Ingrese los elementos de la primera matriz:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Leer la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Sumar matrices
    for (int i = 0; i < N; ++i) {
        for (int j = 0
