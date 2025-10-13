#include <iostream>
#include <cmath>  // Para usar M_PI

using namespace std;

int main() {
    double grados, radianes;

    // Definir pi (si no estás seguro de tener M_PI disponible)
    const double PI = 3.14159265;

    // Convertir grados a radianes
    cout << "Ingresa los grados: ";
    cin >> grados;
    radianes = grados * (PI / 180.0);
    cout << grados << " grados = " << radianes << " radianes" << endl;

    // Convertir radianes a grados
    cout << "Ingresa los radianes: ";
    cin >> radianes;
    grados = radianes * (180.0 / PI);
    cout << radianes << " radianes = " << grados << " grados" << endl;

    return 0;
}
