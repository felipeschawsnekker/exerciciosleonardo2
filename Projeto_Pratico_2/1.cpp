

using namespace std;
#include <iostream>
int main (){
    
    int x=3;
    char campo[x][x];
    int resultado[x][x] = {0};
    cout << "Digite a matriz 20x20 (* para bomba, - para livre):" << endl;
    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++){
            cout<<"["<<i<<" "<<j<<"] : ";
            cin>>campo[i][j];
        }
    
}
    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++){
            int bombas;
            if (i > 0 && j > 0 && campo[i - 1][j - 1] == '*') bombas++;
            if (i > 0 && campo[i - 1][j] == '*') bombas++;
            if (i > 0 && j < x - 1 && campo[i - 1][j + 1] == '*') bombas++;
            if (j > 0 && campo[i][j - 1] == '*') bombas++;
            if (j < x - 1 && campo[i][j + 1] == '*') bombas++;
            if (i < x - 1 && j > 0 && campo[i + 1][j - 1] == '*') bombas++;
            if (i < x - 1 && campo[i + 1][j] == '*') bombas++;
            if (i < x - 1 && j < x - 1 && campo[i + 1][j + 1] == '*') bombas++;

            resultado[i][j] = bombas;
        }
    }
    
   cout << "MATRIZ BOMBA"<<endl;
    for (int i = 0; i < x; i++) {
        cout<<"[";
        for (int j = 0; j < x; j++) {
            cout<<resultado[i][j]<<" ";
        }
        cout<<"]";
        cout << endl;
    }
}
