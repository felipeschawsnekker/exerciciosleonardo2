#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int x;
    
    cout<<"Digite o número de alunos: ";
    cin>>x;
    if (x<1 || x>50) {
        cout<<"Selecione um numero no intervalo de 1 a 50";
        return 0;
    }
    string name[x];
    const int y=5;
    int nota[x][y];
    double media[x][y];
    
     for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            media[i][j] = 0;
        }
    }

    double somamedia[x];
    for (int i=0; i<x; i++){
            somamedia[i]=0;
        }
        
    for (int i=0; i<x; i++){
        cout<<"Nome: ";
        cin>>name[i];

        for (int j=0; j<y; j++){
        cout<<"Nota "<<j+1<<": "; 
        cin>>nota[i][j];
        
        media[i][j] = (double) nota[i][j] / y;
        somamedia[i] += media[i][j];
       
        
    }
    cout<<endl;
    }
    
    cout<<"\n=== Resultados ===\n\n";
    for (int i=0; i<x; i++){
        cout<<"Aluno: ";
        cout<<name[i];
            cout<<endl;
            cout<<"Media do aluno: ";
            cout<<somamedia[i]<<endl;
            if(somamedia[i]<40) cout<<"REPROVADO";
            if(somamedia[i]>40 && somamedia[i]<60) cout<<"RECUPERAÇÃO";
            if(somamedia[i]>=60) cout<<"REPROVADO";
            cout<<endl;
            cout<<"-----------------------";
            cout<<endl;
        }
    
    
    
    
   
}
    

