#include <iostream>
#include <string>
using namespace std;

int main() {
    const int x = 20;
    int numeros[x];
    double valores[x];
    string datas[x];
    string destinos[x];
    int qtd;

    cout << "Quantos cheques deseja registrar (max 20)? ";
    cin >> qtd;
    if (qtd > x) qtd = x;
    cin.ignore();

    for (int i = 0; i < qtd; i++) {
        cout << "\nCheque #" << (i + 1) << endl;

        cout << "Numero do cheque: ";
        cin >> numeros[i];
        cout << "Valor: ";
        cin >> valores[i];
        cin.ignore();

        cout << "Data (dd/mm/aaaa): ";
        getline(cin, datas[i]);

        cout << "Destino: ";
        getline(cin, destinos[i]);
    }

    cout << "\n--- Relatorio de Cheques ---\n";
    for (int i = 0; i < qtd; i++) {
        cout << "Cheque #" << numeros[i] << "\n";
        cout << "Valor: R$ " << valores[i] << "\n";
        cout << "Data: " << datas[i] << "\n";
        cout << "Destino: " << destinos[i] << "\n\n";
    }

    return 0;
}
