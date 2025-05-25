

#include <string>
#include <iostream>
using namespace std;

int main(){
    const int a = 2;
    string nome[a];
    int quantidade[a];
    double preco[a];
    double soma = 0.0; 
    int num;
    bool cadastrou = false;
    
    do {
        cout << "\n------Digite uma opção------" << endl;
        cout << "1 para cadastrar mercadorias\n";
        cout << "2 para exibir o valor total\n";
        cout << "3 para sair\n";
        cin >> num;

        if (num == 1) {
            for (int i = 0; i < a; i++) {
                cout << "\nProduto " << i + 1 << endl;

                cout << "Nome: ";
                cin >> nome[i];

                cout << "Quantidade: ";
                cin >> quantidade[i];

                cout << "Preço: ";
                cin >> preco[i];
            }
            cadastrou = true; 
        }

        else if (num == 2) {
            if (!cadastrou) {
                cout << "Você ainda não cadastrou mercadorias!"<<endl;
                return 0;
            } else {
                soma = 0.0;
                for (int i = 0; i < a; i++) {
                    soma += quantidade[i] * preco[i];
                }
                cout << "\nValor total em mercadorias: R$ " << soma << endl;
            }
        }

        else if (num == 3) {
            cout << "\nEncerrando programa...\n";
        }

        else {
            cout << "\nOpção inválida! Tente novamente.\n";
        }

    } while (num != 3);

    return 0;
}
        
    
