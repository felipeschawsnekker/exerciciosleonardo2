#include <iostream>
using namespace std;

int main() {
    double peso;
    int idade;
    
    double somapesoA = 0, somapesoB = 0, somapesoC = 0, somapesoD = 0, somapesoE = 0;
    double somaidadeA = 0, somaidadeB = 0, somaidadeC = 0, somaidadeD = 0, somaidadeE = 0;
    
    double pesoGeral = 0, idadeGeral = 0;
    int totalJogadores = 12;
    
    char team;
    
    for (int t = 0; t < 5; t++) {
        cout << "Escolha um time (A, B, C, D, E): ";
        cin >> team;
        
        if (!(team == 'A' || team == 'B' || team == 'C' || team == 'D' || team == 'E' || 
              team == 'a' || team == 'b' || team == 'c' || team == 'd' || team == 'e')) {
            cout << "Time invalido! Escolha entre A, B, C, D ou E." << endl;
            t--;
            continue;
        }
        
        for (int i = 0; i < totalJogadores; i++) {
            cout << "Digite o peso do jogador " << i + 1 << ": ";
            cin >> peso;
            cout << "Digite a idade do jogador " << i + 1 << ": ";
            cin >> idade;
            cout << endl;

            if (team == 'A' || team == 'a') {
                somapesoA += peso;
                somaidadeA += idade;
            } else if (team == 'B' || team == 'b') {
                somapesoB += peso;
                somaidadeB += idade;
            } else if (team == 'C' || team == 'c') {
                somapesoC += peso;
                somaidadeC += idade;
            } else if (team == 'D' || team == 'd') {
                somapesoD += peso;
                somaidadeD += idade;
            } else if (team == 'E' || team == 'e') {
                somapesoE += peso;
                somaidadeE += idade;
            }

            pesoGeral += peso;
            idadeGeral += idade;
        }
    }

    cout << "Media do peso do time A: " << somapesoA / totalJogadores << endl;
    cout << "Media da idade do time A: " << somaidadeA / totalJogadores << endl;

    cout << "Media do peso do time B: " << somapesoB / totalJogadores << endl;
    cout << "Media da idade do time B: " << somaidadeB / totalJogadores << endl;

    cout << "Media do peso do time C: " << somapesoC / totalJogadores << endl;
    cout << "Media da idade do time C: " << somaidadeC / totalJogadores << endl;

    cout << "Media do peso do time D: " << somapesoD / totalJogadores << endl;
    cout << "Media da idade do time D: " << somaidadeD / totalJogadores << endl;

    cout << "Media do peso do time E: " << somapesoE / totalJogadores << endl;
    cout << "Media da idade do time E: " << somaidadeE / totalJogadores << endl;

    cout << "Media geral do peso de todos os times: " << pesoGeral / (5 * totalJogadores) << endl;
    cout << "Media geral da idade de todos os times: " << idadeGeral / (5 * totalJogadores) << endl;

    return 0;
}
