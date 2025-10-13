#include <iostream>
using namespace std;

// Función para combinar dos mitades ordenadas
void merge(int arr[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    int L[n1], R[n2];

    // Copiar datos a arrays temporales L[] y R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[medio + 1 + j];

    // Fusionar los arrays temporales
    int i = 0, j = 0, k = izquierda;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar elementos restantes de L[], si hay
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar elementos restantes de R[], si hay
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Función recursiva para aplicar Merge Sort
void mergeSort(int arr[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        // Ordenar primera y segunda mitad
        mergeSort(arr, izquierda, medio);
        mergeSort(arr, medio + 1, derecha);

        // Combinar las mitades ordenadas
        merge(arr, izquierda, medio, derecha);
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

    mergeSort(arr, 0, N - 1);

    cout << "Números ordenados de menor a mayor:\n";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
