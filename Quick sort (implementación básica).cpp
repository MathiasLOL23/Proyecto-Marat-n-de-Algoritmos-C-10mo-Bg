#include <iostream>
using namespace std;

// Función para intercambiar dos elementos
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función de partición
int particion(int arr[], int bajo, int alto) {
    int pivote = arr[alto];  // Elegimos el último elemento como pivote
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (arr[j] < pivote) {
            i++;
            intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[alto]);
    return i + 1;
}

// Función QuickSort recursiva
void quickSort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto); // Índice de partición
        quickSort(arr, bajo, pi - 1);        // Ordenar parte izquierda
        quickSort(arr, pi + 1, alto);        // Ordenar parte derecha
    }
}

int main() {
    int N;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int arr[N];

    cout << "Ingrese los " << N << " números:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    quickSort(arr, 0, N - 1);

    cout << "Números ordenados de menor a mayor:\n";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
