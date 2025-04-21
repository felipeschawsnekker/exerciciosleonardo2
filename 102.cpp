#include <iostream>
using namespace std;

int main() {
    int time, cidade;
    double salario;
    int fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outros_time = 0;
    int rj = 0, niteroi = 0, outros_cidade = 0;
    double soma_salario_botafogo = 0;
    int cont_botafogo = 0;
    int torcedores_rj_outros_times = 0;
    int torcedores_niteroi_fluminense = 0;
    
    while (true) {
        cout << "Digite o numero do seu time (1-Fluminense, 2-Botafogo, 3-Vasco, 4-Flamengo, 5-Outros): ";
        cin >> time;

        if (time < 1 || time > 5) break;

        cout << "Digite o numero da sua cidade (1-RJ, 2-Niteroi, 3-Outros): ";
        cin >> cidade;

        if (cidade < 1 || cidade > 3) break;

        cout << "Digite o seu salario: R$ ";
        cin >> salario;

        if (time == 1) fluminense++;
        if (time == 2) botafogo++;
        if (time == 3) vasco++;
        if (time == 4) flamengo++;
        if (time == 5) outros_time++;

        if (time == 2) {
            soma_salario_botafogo += salario;
            cont_botafogo++;
        }

        if (cidade == 1 && time != 1 && time != 2 && time != 3 && time != 4) {
            torcedores_rj_outros_times++;
        }

        if (cidade == 2 && time == 1) {
            torcedores_niteroi_fluminense++;
        }

        cout << "Digite 0 para encerrar ou qualquer outro numero para continuar: ";
        int opcao;
        cin >> opcao;
        if (opcao == 0) break;
    }

    cout << "\nNumero de torcedores por clube:" << endl;
    cout << "Fluminense: " << fluminense << endl;
    cout << "Botafogo: " << botafogo << endl;
    cout << "Vasco: " << vasco << endl;
    cout << "Flamengo: " << flamengo << endl;
    cout << "Outros: " << outros_time << endl;

    if (cont_botafogo > 0) {
        cout << "Media salarial dos torcedores do Botafogo: R$ " << soma_salario_botafogo / cont_botafogo << endl;
    } else {
        cout << "Nenhum torcedor do Botafogo foi registrado." << endl;
    }

    cout << "Numero de pessoas moradoras do RJ que torcem para outros times: " << torcedores_rj_outros_times << endl;
    cout << "Numero de pessoas de Niteroi torcedoras do Fluminense: " << torcedores_niteroi_fluminense << endl;

    return 0;
}
