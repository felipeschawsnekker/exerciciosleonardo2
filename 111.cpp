#include <iostream>
using namespace std;

int main() {
    const int tamanho = 25;
    int A[tamanho], B[tamanho], V[tamanho * 2];

    for (int i = 0; i < tamanho; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < tamanho; i++) {
        cin >> B[i];
    }

    for (int i = 0, j = 0; i < tamanho; i++) {
        V[j++] = A[i];
        V[j++] = B[i];
    }

    // Bubble sort em ordem decrescente
    for (int i = 0; i < 49; i++) {
        for (int j = 0; j < 49 - i; j++) {
            if (V[j] < V[j + 1]) {
                int temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 50; i++) {
        cout << V[i] << " ";
    }

    cout << endl;
    return 0;
}
