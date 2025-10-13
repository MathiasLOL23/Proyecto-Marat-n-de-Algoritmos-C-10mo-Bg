#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int arr[N];

    // Leer números
    cout << "Ingrese los " << N << " números:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < N - 1; ++i) {
        int minIndex = i;

        // Buscar el índice del menor elemento restante
        for (int j = i + 1; j < N; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Intercambiar si se encontró uno menor
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Mostrar el arreglo ordenado
    cout << "Números ordenados de menor a mayor:\n";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
