#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int A[tamanho];
    int B[tamanho];

    cout << "Digite 10 valores para o vetor A:\n";
    for (int i = 0; i < tamanho; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < tamanho; i++) {
        if (A[i] % 2 == 0) {
            B[i] = A[i] / 2;
        } else {
            B[i] = A[i] * 3;
        }
    }

    cout << "\nVetor A: ";
    for (int i = 0; i < tamanho; i++) {
        cout << A[i] << " ";
    }

    cout << "\nVetor B: ";
    for (int i = 0; i < tamanho; i++) {
        cout << B[i] << " ";
    }

    cout << endl;
    return 0;
}
