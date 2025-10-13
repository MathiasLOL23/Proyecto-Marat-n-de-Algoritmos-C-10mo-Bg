#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 0;
    }

    original = numero;

    // Invertir el número
    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    // Comparar original con invertido
    if (original == invertido)
        cout << original << " es un palíndromo numérico." << endl;
    else
        cout << original << " no es un palíndromo numérico." << endl;

    return 0;
}
