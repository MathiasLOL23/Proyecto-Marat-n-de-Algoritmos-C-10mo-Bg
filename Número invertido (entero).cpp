#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
    } else {
        while (numero > 0) {
            int digito = numero % 10;     // Obtener el último dígito
            invertido = invertido * 10 + digito;  // Construir el número invertido
            numero /= 10;                 // Eliminar el último dígito
        }

        cout << "El número invertido es: " << invertido << endl;
    }

    return 0;
}
