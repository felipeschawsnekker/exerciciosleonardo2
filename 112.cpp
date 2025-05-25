#include <iostream>
using namespace std;

int main() {
    const int tamanho = 100;
    int v[tamanho];
    int iguais30 = 0;
    int soma = 0;
    double media;
    int maioresMedia = 0;
    int iguaisMedia = 0;

    for (int i = 0; i < tamanho; i++) {
        v[i] = i + 1;  
        soma += v[i];
        if (v[i] == 30) {
            iguais30++;
        }
    }

    media = soma / (double)tamanho;

    for (int i = 0; i < tamanho; i++) {
        if (v[i] > media) {
            maioresMedia++;
        } else if (v[i] == media) {
            iguaisMedia++;
        }
    }

    cout << "Numeros iguais a 30: " << iguais30 << endl;
    cout << "Numeros maiores que a media: " << maioresMedia << endl;
    cout << "Numeros iguais a media: " << iguaisMedia << endl;

    return 0;
}
