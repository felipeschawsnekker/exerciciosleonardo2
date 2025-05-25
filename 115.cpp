#include <iostream>
using namespace std;

const int MAX = 15;

void inserir(int codigos[], double salarios[], int &count) {
    if (count == MAX) {
        cout << "Limite de pessoas atingido.\n";
        return;
    }
    cout << "Digite o codigo da pessoa: ";
    cin >> codigos[count];
    cout << "Digite o salario da pessoa: ";
    cin >> salarios[count];
    count++;
}

void ordenar(int codigos[], double salarios[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (codigos[i] > codigos[j]) {
                swap(codigos[i], codigos[j]);
                swap(salarios[i], salarios[j]);
            }
        }
    }
    cout << "Vetor ordenado por codigo.\n";
}

void listar(int codigos[], double salarios[], int count) {
    if (count == 0) {
        cout << "Nenhum dado para listar.\n";
        return;
    }
    cout << "Lista de pessoas:\n";
    for (int i = 0; i < count; i++) {
        cout << "Codigo: " << codigos[i] << ", Salario: " << salarios[i] << endl;
    }
}

void procurar(int codigos[], double salarios[], int count) {
    if (count == 0) {
        cout << "Nenhum dado para procurar.\n";
        return;
    }
    int codBusca;
    cout << "Digite o codigo a procurar: ";
    cin >> codBusca;
    for (int i = 0; i < count; i++) {
        if (codigos[i] == codBusca) {
            cout << "Encontrado - Codigo: " << codigos[i] << ", Salario: " << salarios[i] << endl;
            return;
        }
    }
    cout << "Codigo nao encontrado.\n";
}

int main() {
    int codigos[MAX];
    double salarios[MAX];
    int count = 0;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1-) Inserir\n";
        cout << "2-) Ordenar\n";
        cout << "3-) Listar\n";
        cout << "4-) Procurar\n";
        cout << "5-) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1: inserir(codigos, salarios, count); break;
            case 2: ordenar(codigos, salarios, count); break;
            case 3: listar(codigos, salarios, count); break;
            case 4: procurar(codigos, salarios, count); break;
            case 5: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
