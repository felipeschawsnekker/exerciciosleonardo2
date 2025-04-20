#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Digite o limite superior: ";
    cin >> limite;

    for (int i = 1; i < limite; i++) {
        if (i % 2 == 1) {
            cout << i << endl;
        }
    }

    return 0;
}
