#include <iostream>
#include <string>
using namespace std;

int main() {
    const int qtd = 50;
    string nomes[qtd];
    double nota1[qtd], nota2[qtd], media[qtd];
    bool nomeDigitado[qtd] = {false};
    bool nota1Digitada[qtd] = {false};
    bool nota2Digitada[qtd] = {false};
    bool mediaCalculada = false;

    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1-) Digitar os nomes\n";
        cout << "2-) Digitar 1 nota\n";
        cout << "3-) Digitar 2 nota\n";
        cout << "4-) Calcular Media\n";
        cout << "5-) Exibir Informacoes\n";
        cout << "6-) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            for (int i = 0; i < qtd; i++) {
                cout << "Digite o nome do aluno " << i + 1 << ": ";
                getline(cin, nomes[i]);
                nomeDigitado[i] = true;
            }
        } 
        else if (opcao == 2) {
            for (int i = 0; i < qtd; i++) {
                if (!nomeDigitado[i]) {
                    cout << "Digite o nome do aluno " << i + 1 << " antes da nota.\n";
                    continue;
                }
                cout << "Digite a primeira nota do aluno " << nomes[i] << ": ";
                cin >> nota1[i];
                nota1Digitada[i] = true;
            }
            cin.ignore();
        } 
        else if (opcao == 3) {
            for (int i = 0; i < qtd; i++) {
                if (!nomeDigitado[i]) {
                    cout << "Digite o nome do aluno " << i + 1 << " antes da nota.\n";
                    continue;
                }
                cout << "Digite a segunda nota do aluno " << nomes[i] << ": ";
                cin >> nota2[i];
                nota2Digitada[i] = true;
            }
            cin.ignore();
        } 
        else if (opcao == 4) {
            mediaCalculada = false;
            for (int i = 0; i < qtd; i++) {
                if (nota1Digitada[i] && nota2Digitada[i]) {
                    media[i] = (nota1[i] * 3 + nota2[i] * 7) / 10.0;
                } else {
                    media[i] = 0.0;
                }
            }
            mediaCalculada = true;
            cout << "Media calculada para todos os alunos.\n";
        } 
        else if (opcao == 5) {
            if (!mediaCalculada) {
                cout << "Calcule a media antes de exibir as informacoes.\n";
            } else {
                cout << "Lista de alunos e medias:\n";
                for (int i = 0; i < qtd; i++) {
                    cout << "Nome: " << nomes[i] 
                         << ", Nota1: " << nota1[i] 
                         << ", Nota2: " << nota2[i] 
                         << ", Media: " << media[i] << endl;
                }
            }
        } 
        else if (opcao == 6) {
            cout << "Saindo...\n";
        } 
        else {
            cout << "Opcao invalida, tente novamente.\n";
        }

    } while (opcao != 6);

    return 0;
}
