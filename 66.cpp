#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite os 3 lados:\n";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Os valores PODEM formar um triangulo.\n";
    } else {
        cout << "Os valores NAO podem formar um triangulo.\n";
    }

    return 0;
}
