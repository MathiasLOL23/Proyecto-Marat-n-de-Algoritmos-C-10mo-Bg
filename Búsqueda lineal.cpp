#include <iostream>
using namespace std;

int main() {
    int N, clave, encontrado = -1;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> N;

    int arr[N];

    // Leer el arreglo
    cout << "Ingrese los " << N << " elementos:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Leer el número a buscar
    cout << "Ingrese el número a buscar: ";
    cin >> clave;

    // Búsqueda lineal
    for (int i = 0; i < N; ++i) {
        if (arr[i] == clave) {
            encontrado = i;
            break;
        }
    }

    // Mostrar resultado
    if (encontrado != -1)
        cout << "Elemento encontrado en la posición " << encontrado << " (índice 0-based)." << endl;
    else
        cout << "Elemento no encontrado en el arreglo." << endl;

    return 0;
}
