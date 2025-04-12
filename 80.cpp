

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
    string name;
    double eleitor;
    double votos;
    
    cout<<"Digite o nome do municipio: "; cin>>name;
    cout<<"Digite a quantidade de eleitores aptos: "; cin>>eleitor;
    cout<<"Digite a quantidade de votos do candidato mais votado: "; cin>>votos;
    
    if(eleitor<=20000){
        cout<<"Poucos eleitores para segundo turno"; 
    return 1;
    }
    
    cout<<fixed<<setprecision(2);
    double segundoturno=votos/eleitor;
    
    if(segundoturno<=0.50) cout<<"Está apto para segundo turno";
    
    if(segundoturno>0.50) cout<<"Não está apto para segundo turno";
    
    return 0;
}
    
