#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    char jogar = 's';

    while (jogar == 's' || jogar == 'S') {
        int numero = rand() % 100 + 1;
        int palpite, tentativas = 0;

        cout << "Pensei em um número entre 1 e 100. Adivinhe qual é! ";
        do {
            cin >> palpite;
            tentativas++;
            if (palpite > numero)
                cout << "Não, o número que pensei é menor. Tente outro: ";
            else if (palpite < numero)
                cout << "Não, o número que pensei é maior. Tente outro: ";
        } while (palpite != numero);

        if (tentativas == 1)
            cout << "Isso! Seu sortudo, acertou de primeira!" << endl;
        else
            cout << "Isso! Você acertou com " << tentativas << " tentativas!" << endl;

        cout << "Quer jogar de novo (s/n)? ";
        cin >> jogar;
    }

    cout << "Ok, nos vemos mais tarde quando quiser jogar de novo." << endl;
    return 0;
}
