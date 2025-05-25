#include <iostream>
using namespace std;

int main() {
    const int tamanho = 25;
    int A[tamanho], B[tamanho], C[tamanho * 2];

    for (int i = 0; i < tamanho; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < tamanho; i++) {
        cin >> B[i];
    }

    for (int i = 0, j = 0; i < tamanho; i++) {
        C[j++] = A[i];
        C[j++] = B[i];
    }

    for (int i = 0; i < tamanho * 2; i++) {
        cout << C[i] << " ";
    }

    cout << endl;
    return 0;
}
