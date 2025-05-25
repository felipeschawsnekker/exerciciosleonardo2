#include <iostream>
using namespace std;

int main() {
    const int tamanho = 20;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nVetor original:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }

    cout << "\nVetor apos as trocas:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    return 0;
}
