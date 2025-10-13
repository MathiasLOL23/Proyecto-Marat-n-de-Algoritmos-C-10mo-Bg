#include <iostream>
using namespace std;

// Función para calcular base^exponente usando exponenciación rápida
long long potencia_rapida(long long base, long long exponente) {
    long long resultado = 1;
    long long b = base;
    long long e = exponente;

    while (e > 0) {
        if (e % 2 == 1) {          // Si el bit menos significativo es 1
            resultado *= b;
        }
        b *= b;                    // Elevar base al cuadrado
        e /= 2;                    // Desplazar exponente a la derecha (dividir entre 2)
    }

    return resultado;
}

int main() {
    long long base, exponente;

    cout << "Ingrese la base (entero): ";
    cin >> base;
    cout << "Ingrese el exponente (entero no negativo): ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "El exponente debe ser no negativo." << endl;
        return 0;
    }

    long long resultado = potencia_rapida(base, exponente);

    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
