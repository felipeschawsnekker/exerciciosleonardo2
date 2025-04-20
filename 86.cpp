using namespace std;
#include <iostream>

int main() {

    int f = 0;
    int m = 0;
    int idademaiorque21homem = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Digite seu sexo (F ou M): ";
        char sexo;
        cin >> sexo;

        if (sexo == 'F' || sexo == 'f') {
            f++;
            int idade;
            cout << "Qual sua idade: ";
            cin >> idade;
        }
        else if (sexo == 'M' || sexo == 'm') {
            m++;
            int idade;
            cout << "Qual sua idade: ";
            cin >> idade;
            if (idade > 21) {
                idademaiorque21homem++;
            }
        }
        else {
            cout << "Valor inválido, tente novamente." << endl;
            i--;
        }
    }

    cout << "Quantidade de mulheres: " << f << endl;
    cout << "Quantidade de homens: " << m << endl;
    cout << "Quantidade de homens maior que 21 anos: " << idademaiorque21homem << endl;

    int total = f + m;
    if (total > 0) {
        double percentual = (double)idademaiorque21homem / total * 100;
        cout << "Percentual: " << percentual << "%" << endl;
    }

    return 0;
}
