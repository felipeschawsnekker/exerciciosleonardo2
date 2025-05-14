

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int a=20;
int codigo[a];
int quantidade[a];
string nome[a];
double compra[a];
double venda[a];
int main(){
    

for (int i=0; i<1; i++){
    
    cout<<"Código: ";
    cin>>codigo[i];
    cin.ignore();
    
    cout<<"Nome: ";
    getline(cin,nome[i]);
    
    cout<<"Quantidade: ";
    cin>>quantidade[i];
    
    cout<<"Valor de compra: ";
    cin>>compra[i];
    
    cout<<"Valor de venda: ";
    cin>>venda[i];
    
    cout<<endl;
}

cout<<"Digite 1 para exibir a lista completa. "<<endl;
cout<<"Digite 2 para procurar um código específico. "<<endl;
int z;
cin>>z;

if (z==1){
cout<<"----------EXIBIÇÃO----------"<<endl;
cout<<"POSIÇÃO DO ITEM - CÓDIGO - NOME - QUANTIDADE - VALOR DE COMPRA - VALOR DE VENDA"<<endl;
for (int i=0; i<20; i++){
    cout << setfill('0') << setw(2);
    cout<<i+1<<" - "<<codigo[i]<<" - "<<nome[i]<<" - "<<quantidade[i]<<" - "<<compra[i]<<" - "<<venda[i]<<endl;
}

}

else if (z==2){
    
    cout<<"Digite o código: "
}
}
