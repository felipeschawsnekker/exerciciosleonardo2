#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

int main() {
    string nomes[MAX];
    int milhagem[MAX] = {0};
    int count = 0;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1-) Cadastrar dados do cliente\n";
        cout << "2-) Cadastrar milhagem do cliente\n";
        cout << "3-) Listar todos os clientes e suas milhagens\n";
        cout << "4-) Exibir clientes com maior e menor milhagem\n";
        cout << "5-) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            if (count == MAX) {
                cout << "Limite de clientes atingido.\n";
            } else {
                cout << "Digite o nome do cliente: ";
                getline(cin, nomes[count]);
                milhagem[count] = 0; // inicializa milhagem
                count++;
            }
        } else if (opcao == 2) {
            if (count == 0) {
                cout << "Nenhum cliente cadastrado.\n";
            } else {
                string nomeBusca;
                cout << "Digite o nome do cliente para atualizar milhagem: ";
                getline(cin, nomeBusca);
                bool achou = false;
                for (int i = 0; i < count; i++) {
                    if (nomes[i] == nomeBusca) {
                        cout << "Digite a milhagem do cliente: ";
                        int m;
                        cin >> m;
                        cin.ignore();
                        milhagem[i] = m;
                        achou = true;
                        cout << "Milhagem atualizada.\n";
                        break;
                    }
                }
                if (!achou) cout << "Cliente nao encontrado.\n";
            }
        } else if (opcao == 3) {
            if (count == 0) {
                cout << "Nenhum cliente cadastrado.\n";
            } else {
                cout << "Clientes e suas milhagens:\n";
                for (int i = 0; i < count; i++) {
                    cout << nomes[i] << " - Milhagem: " << milhagem[i] << endl;
                }
            }
        } else if (opcao == 4) {
            if (count == 0) {
                cout << "Nenhum cliente cadastrado.\n";
            } else {
                int maior = milhagem[0];
                int menor = milhagem[0];
                for (int i = 1; i < count; i++) {
                    if (milhagem[i] > maior) maior = milhagem[i];
                    if (milhagem[i] < menor) menor = milhagem[i];
                }
                cout << "Clientes com maior milhagem (" << maior << "):\n";
                for (int i = 0; i < count; i++) {
                    if (milhagem[i] == maior) cout << nomes[i] << endl;
                }
                cout << "Clientes com menor milhagem (" << menor << "):\n";
                for (int i = 0; i < count; i++) {
                    if (milhagem[i] == menor) cout << nomes[i] << endl;
                }
            }
        } else if (opcao == 5) {
            cout << "Saindo...\n";
        } else {
            cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
