using namespace std;
#include <iostream>

int main() {
    int conta;
    double saldo;
    int n = 0;
    int p = 0;
    int total = 0;

    while (true) {
        cout << "O programa se encerrará se o número for negativo." << endl;
        cout << "Digite o número da conta: ";
        cin >> conta;

        if (conta < 0) break;

        cout << "Digite o saldo: R$";
        cin >> saldo;
        cout << endl;

        if (saldo < 0) {
            cout << "Número de conta: " << conta << "\nSaldo: R$" << saldo << " (NEGATIVO) \n\n";
            n++;
        }

        if (saldo > 0) {
            cout << "Número de conta: " << conta << "\nSaldo: R$" << saldo << " (POSITIVO) \n\n";
            p++;
        }

        if (saldo == 0) {
            cout << "Número de conta: " << conta << "\nSaldo: R$0 (NULO) \n\n";
        }

        total++;
    }

    if (total != 0) {
        double porcentagem = (double)n / total * 100;
        cout << "O percentual de pessoas com saldo negativo é: " << porcentagem << "%" << endl;
    } else {
        cout << "ENCERRANDO" << endl;
    }

    return 0;
}
