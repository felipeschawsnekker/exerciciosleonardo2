#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_ALUGUEIS = 300;

int main() {
    string placas[MAX_ALUGUEIS];
    string modelos[MAX_ALUGUEIS];
    int vezes_alugado[MAX_ALUGUEIS] = {0};
    double valores[MAX_ALUGUEIS] = {0.0};
    int total_carros = 0;

    double caixa_inicial, total_recebido = 0.0;

    cout << "Informe o valor inicial do caixa: R$ ";
    cin >> caixa_inicial;

    int opcao = 1;
    while (opcao == 1 && total_carros < MAX_ALUGUEIS) {
        string placa, modelo;
        int dias;
        double valor_pago;

        cout << "\nDigite a placa do carro: ";
        cin >> placa;
        cout << "Digite o modelo do carro: ";
        cin.ignore();
        getline(cin, modelo);
        cout << "Digite o número de dias da locação: ";
        cin >> dias;
        cout << "Digite o valor pago pelo aluguel: R$ ";
        cin >> valor_pago;

        int pos = -1;
        for (int i = 0; i < total_carros; i++) {
            if (placas[i] == placa) {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            placas[total_carros] = placa;
            modelos[total_carros] = modelo;
            vezes_alugado[total_carros] = 1;
            valores[total_carros] = valor_pago;
            total_carros++;
        } else {
            vezes_alugado[pos]++;
            valores[pos] += valor_pago;
        }

        total_recebido += valor_pago;

        cout << "\nRegistrar mais aluguel? (1 = sim, 0 = não): ";
        cin >> opcao;
    }

    double total_caixa = caixa_inicial + total_recebido;

    for (int i = 0; i < total_carros - 1; i++) {
        for (int j = i + 1; j < total_carros; j++) {
            if (vezes_alugado[j] > vezes_alugado[i]) {
                swap(placas[i], placas[j]);
                swap(modelos[i], modelos[j]);
                swap(vezes_alugado[i], vezes_alugado[j]);
                swap(valores[i], valores[j]);
            }
        }
    }

    cout << "\n\n---- RELATÓRIO DIÁRIO ----\n";
    cout << "Total recebido hoje: R$ " << total_recebido << endl;
    cout << "Valor total no caixa: R$ " << total_caixa << endl;

    cout << "\nTop 10 carros mais alugados:\n";
    cout << "Placa\tModelo\t\tVezes Alugado\tValor Recebido\n";

    int limite = total_carros < 10 ? total_carros : 10;
    double soma_top10 = 0.0;
    for (int i = 0; i < limite; i++) {
        cout << placas[i] << "\t" << modelos[i] << "\t\t" << vezes_alugado[i]
             << "\t\tR$ " << valores[i] << endl;
        soma_top10 += valores[i];
    }

    cout << "\nValor recebido pelos 10 carros mais alugados: R$ " << soma_top10 << endl;

    return 0;
}
