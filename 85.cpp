#include <iostream>
using namespace std;

int main() {
    double g, resultado;
    int n;

    cout << "Digite o valor em graus: ";
    cin >> g;

    cout << "Celsius para Fahrenheit (Digite 1)" << endl;
    cout << "Fahrenheit para Celsius (Digite 2)" << endl;
    cin >> n;

    if (n == 1) {
        resultado = (g * 1.8) + 32;
        cout << "Em Fahrenheit: " << resultado << endl;
    } else if (n == 2) {
        resultado = 5 * (g - 32) / 9;
        cout << "Em Celsius: " << resultado << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    return 0;
}
