#include <iostream>
using namespace std;

int main() {
    double base, altura;

    // Pedir datos al usuario
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    // Calcular área y perímetro
    double area = base * altura;
    double perimetro = 2 * (base + altura);

    // Mostrar resultados
    cout << "Área del rectángulo: " << area << endl;
    cout << "Perímetro del rectángulo: " << perimetro << endl;

    return 0;
}
