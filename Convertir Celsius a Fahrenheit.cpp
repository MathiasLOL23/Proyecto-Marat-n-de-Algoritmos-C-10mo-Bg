#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Pedir al usuario que ingrese la temperatura en Celsius
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;

    // Convertir a Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Mostrar el resultado
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << " °F" << endl;

    return 0;
}
