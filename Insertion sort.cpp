#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int arr[N];

    // Leer los números
    cout << "Ingrese los " << N << " números:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < N; ++i) {
        int clave = arr[i];
        int j = i - 1;

        // Mover los elementos mayores hacia la derecha
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = clave;
    }

    // Mostrar el arreglo ordenado
    cout << "Números ordenados de menor a mayor:\n";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
