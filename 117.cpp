#include <iostream>
#include <string>
using namespace std;

const int MAX = 40;

int main() {
    string nomes[MAX];
    int quantidades[MAX] = {0};
    double precos[MAX] = {0.0};
    int count = 0;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1-) Cadastrar mercadorias\n";
        cout << "2-) Exibir valor total em mercadorias da empresa\n";
        cout << "3-) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            if (count == MAX) {
                cout << "Limite de mercadorias atingido.\n";
            } else {
                cout << "Digite o nome da mercadoria: ";
                getline(cin, nomes[count]);
                cout << "Digite a quantidade em estoque: ";
                cin >> quantidades[count];
                cout << "Digite o preco unitario: ";
                cin >> precos[count];
                cin.ignore();
                count++;
            }
        } 
        else if (opcao == 2) {
            if (count == 0) {
                cout << "Nenhuma mercadoria cadastrada.\n";
            } else {
                double total = 0;
                for (int i = 0; i < count; i++) {
                    total += quantidades[i] * precos[i];
                }
                cout << "Valor total em mercadorias: R$ " << total << endl;
            }
        } 
        else if (opcao == 3) {
            cout << "Saindo...\n";
        } 
        else {
            cout << "Opcao invalida.\n";
        }
    } while (opcao != 3);

    return 0;
}
