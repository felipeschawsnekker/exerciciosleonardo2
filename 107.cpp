#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    int v[x];
    int w[x];

    for (int i = 0; i < x; i++) {
        cout << "Digite um numero nao negativo: ";
        cin >> v[i];
        if (v[i] < 0) {
            cout << "Numero negativo nao permitido. Digite novamente." << endl;
            i--;
        }
    }

    for (int i = 0; i < x; i++) {
        int resultado = 1;
        for (int j = 2; j <= v[i]; j++) {
            resultado *= j;
        }
        w[i] = resultado;
    }

    cout << "\nFatoriais:\n";
    for (int i = 0; i < x; i++) {
        cout << "fatorial(" << v[i] << ") = " << w[i] << endl;
    }

    return 0;
}
