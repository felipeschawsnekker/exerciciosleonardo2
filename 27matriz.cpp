#include <iostream>
using namespace std;

int vetor[20];
int main(){
   
   for (int i = 0; i < 20; i++) {
    cin >> vetor[i];
}

for (int i = 0; i < 20; i++) {
    cout << vetor[i] << " ";
}
    
    
for (int i = 0; i < 10; i++) {
    int x = vetor[i];
    vetor[i] = vetor[19 - i];
    vetor[19 - i] = x;
}

cout << "Vetor apos as trocas:";
    for (int i = 0; i < 20; i++) {
        cout << vetor[i] << " ";
    }
}
