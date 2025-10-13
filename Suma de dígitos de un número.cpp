#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
    } else {
        while (numero > 0) {
            int digito = numero % 10;  // Obtener el último dígito
            suma += digito;            // Sumarlo
            numero /= 10;              // Eliminar el último dígito
        }

        cout << "La suma de los dígitos es: " << suma << endl;
    }

    return 0;
}
