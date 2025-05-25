#include <iostream>
using namespace std;

int main() {
    const int tamanho = 100;
    int v[tamanho];
    int maior, menor;
    int soma = 0;
    int pares = 0;

    cout << "Digite 100 numeros inteiros:\n";

    for (int i = 0; i < tamanho; i++) {
        cin >> v[i];
        soma += v[i];

        if (v[i] % 2 == 0) {
            pares++;
        }

        if (i == 0) {
            maior = menor = v[i];
        } else {
            if (v[i] > maior) maior = v[i];
            if (v[i] < menor) menor = v[i];
        }
    }

    double media = soma / 100.0;
    double percentualPares = (pares / 100.0) * 100;

    cout << "\nMaior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Percentual de pares: " << percentualPares << "%" << endl;
    cout << "Media dos elementos: " << media << endl;

    return 0;
}
