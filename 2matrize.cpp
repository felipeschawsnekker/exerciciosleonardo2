#include <iostream>
using namespace std;

const int N = 20;

int main() {
    double matriz[N][N];

    // Leitura da matriz
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matriz[i][j];

    double soma[8] = {0};
    int cont[8] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            // a) Diagonal principal superior
            if (i < j) {
                soma[0] += matriz[i][j];
                cont[0]++;
            }

            // b) Diagonal principal inferior
            if (i > j) {
                soma[1] += matriz[i][j];
                cont[1]++;
            }

            // c) Diagonal secundária superior
            if (i + j < N - 1) {
                soma[2] += matriz[i][j];
                cont[2]++;
            }

            // d) Diagonal secundária inferior
            if (i + j > N - 1) {
                soma[3] += matriz[i][j];
                cont[3]++;
            }

            // e) Diagonais principal e secundária (cruz)
            if (i == j || i + j == N - 1) {
                soma[4] += matriz[i][j];
                cont[4]++;
            }

            // f) Fora da cruz (não pertencem a nenhuma diagonal)
            if (i != j && i + j != N - 1) {
                soma[5] += matriz[i][j];
                cont[5]++;
            }

            // g) Quadrantes inferior esquerdo (i ≥ N/2, j < N/2) e superior direito (i < N/2, j ≥ N/2)
            if ((i >= N/2 && j < N/2) || (i < N/2 && j >= N/2)) {
                soma[6] += matriz[i][j];
                cont[6]++;
            }

            // h) Triângulo inferior esquerdo (i > j && i + j >= N - 1)
            if (i > j && i + j >= N - 1) {
               #include <iostream>
using namespace std;

const int N = 20;

int main() {
    double matriz[N][N];

    // Leitura da matriz
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matriz[i][j];

    double soma[8] = {0};
    int cont[8] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            // a) Diagonal principal superior
            if (i < j) {
                soma[0] += matriz[i][j];
                cont[0]++;
            }

            // b) Diagonal principal inferior
            if (i > j) {
                soma[1] += matriz[i][j];
                cont[1]++;
            }

            // c) Diagonal secundária superior
            if (i + j < N - 1) {
                soma[2] += matriz[i][j];
                cont[2]++;
            }

            // d) Diagonal secundária inferior
            if (i + j > N - 1) {
                soma[3] += matriz[i][j];
                cont[3]++;
            }

            // e) Diagonais principal e secundária (cruz)
            if (i == j || i + j == N - 1) {
                soma[4] += matriz[i][j];
                cont[4]++;
            }

            // f) Fora da cruz (não pertencem a nenhuma diagonal)
            if (i != j && i + j != N - 1) {
                soma[5] += matriz[i][j];
                cont[5]++;
            }

            // g) Quadrantes inferior esquerdo (i ≥ N/2, j < N/2) e superior direito (i < N/2, j ≥ N/2)
            if ((i >= N/2 && j < N/2) || (i < N/2 && j >= N/2)) {
                soma[6] += matriz[i][j];
                cont[6]++;
            }

            // h) Triângulo inferior esquerdo (i > j && i + j >= N - 1)
            if (i > j && i + j >= N - 1) {
                soma[7] += matriz[i][j];
                cont[7]++;
            }
        }
    }

    // Saída das médias
    for (int k = 0; k < 8; k++) {
        if (cont[k] > 0)
            cout << "Media " << char('a' + k) << ": " << soma[k] / cont[k] << endl;
        else
            cout << "Media " << char('a' + k) << ": Sem elementos" << endl;
    }

    return 0;
} soma[7] += matriz[i][j];
                cont[7]++;
            }
        }
    }

    // Saída das médias
    for (int k = 0; k < 8; k++) {
        if (cont[k] > 0)
            cout << "Media " << char('a' + k) << ": " << soma[k] / cont[k] << endl;
        else
            cout << "Media " << char('a' + k) << ": Sem elementos" << endl;
    }

    return 0;
}
