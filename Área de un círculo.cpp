#include <iostream>
#include <cmath>  // Para M_PI y pow

using namespace std;

int main() {
    double radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    double area = M_PI * pow(radio, 2);

    cout << "El área del círculo es: " << area << endl;

    return 0;
}
