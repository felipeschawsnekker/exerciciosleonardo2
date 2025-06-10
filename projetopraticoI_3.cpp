#include <iostream>
using namespace std;
#include <vector>

int main(){
    
    int a;
    cout << "Dígite o número de alunos: ";
    cin >> a;
    int x[a];
    vector<int> contagem(a);
    
    for(int i = 0; i < a; i++){
        contagem[i] = 0;
    }
    
    cout << "Dígite os votos: ";
    for(int i = 0; i < a; i++){
        cin >> x[i];
        if (x[i] >= 1 && x[i] <= a) {
            contagem[x[i] - 1]++;
        }
    }
    
    int representante = 0;
    int vice = 0;
    
    for (int i = 1; i < a; i++) {
        if (contagem[i] > contagem[representante]) {
            vice = representante;
            representante = i;
        } else if (contagem[i] > contagem[vice] && i != representante) {
            vice = i;
        }
    }

    cout << "O vice representante será o aluno " << vice + 1
         << " que obteve " << contagem[vice] << " votos." << endl;

    cout << "O representante será o aluno " << representante + 1
         << " que obteve " << contagem[representante] << " votos." << endl;

    return 0;
}
