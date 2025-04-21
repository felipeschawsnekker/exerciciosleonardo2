#include <iostream>
using namespace std;

int main() {
    int idade;
    char estadoCivil;
    int casados = 0, solteiros = 0, desquitados = 0, viuvos = 0, total = 0;
    int somaIdadeViuvos = 0;
    
    while (true) {
        cout << "Digite a idade: ";
        cin >> idade;
        
        if (idade < 0) break;
        
        cout << "Digite o estado civil (C-casado, S-solteiro, V-viúvo, D-desquitado): ";
        cin >> estadoCivil;
        
        total++;
        
        if (estadoCivil == 'C' || estadoCivil == 'c') {
            casados++;
        }
        if (estadoCivil == 'S' || estadoCivil == 's') {
            solteiros++;
        }
        if (estadoCivil == 'V' || estadoCivil == 'v') {
            viuvos++;
            somaIdadeViuvos += idade;
        }
        if (estadoCivil == 'D' || estadoCivil == 'd') {
            desquitados++;
        }
    }
    
    if (viuvos > 0) {
        cout << "Média das idades das pessoas viúvas: " << (double)somaIdadeViuvos / viuvos << endl;
    } else {
        cout << "Não há pessoas viúvas." << endl;
    }
    
    double porcentagemDesquitados = (double)desquitados / total * 100;
    
    cout << "Quantidade de pessoas casadas: " << casados << endl;
    cout << "Quantidade de pessoas solteiras: " << solteiros << endl;
    cout << "Porcentagem de pessoas desquitadas ou separadas: " << porcentagemDesquitados << "%" << endl;
    
    return 0;
}
