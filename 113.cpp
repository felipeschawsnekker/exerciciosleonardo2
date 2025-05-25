#include <iostream>
#include <string>
using namespace std;

int main() {
    const int qtd = 20;
    string nomes[qtd];
    double notas[qtd];
    int idades[qtd];
    bool dadosLidos = false;
    int opcao;
    double somaNotas = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1 - Ler nomes, notas e idades dos candidatos\n";
        cout << "2 - Exibir media geral das notas\n";
        cout << "3 - Exibir lista com nome e nota\n";
        cout << "4 - Buscar candidato por nome e exibir nome e idade\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            somaNotas = 0;
            for (int i = 0; i < qtd; i++) {
                cout << "Digite o nome do candidato " << (i + 1) << ": ";
                getline(cin, nomes[i]);
                cout << "Digite a nota do candidato " << (i + 1) << ": ";
                cin >> notas[i];
                cout << "Digite a idade do candidato " << (i + 1) << ": ";
                cin >> idades[i];
                cin.ignore();
                somaNotas += notas[i];
            }
            dadosLidos = true;
        } 
        else if (opcao == 2) {
            if (!dadosLidos) {
                cout << "Nenhum dado foi lido ainda.\n";
            } else {
                cout << "Media geral das notas: " << somaNotas / qtd << endl;
            }
        } 
        else if (opcao == 3) {
            if (!dadosLidos) {
                cout << "Nenhum dado foi lido ainda.\n";
            } else {
                cout << "Lista dos candidatos:\n";
                for (int i = 0; i < qtd; i++) {
                    cout << nomes[i] << " - Nota: " << notas[i] << endl;
                }
            }
        } 
        else if (opcao == 4) {
            if (!dadosLidos) {
                cout << "Nenhum dado foi lido ainda.\n";
            } else {
                string busca;
                cout << "Digite o nome do candidato a buscar: ";
                getline(cin, busca);
                bool achou = false;
                for (int i = 0; i < qtd; i++) {
                    if (nomes[i] == busca) {
                        cout << "Nome: " << nomes[i] << ", Idade: " << idades[i] << endl;
                        achou = true;
                        break;
                    }
                }
                if (!achou) {
                    cout << "Candidato nao encontrado.\n";
                }
            }
        } 
        else if (opcao == 0) {
            cout << "Saindo...\n";
        } 
        else {
            cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
