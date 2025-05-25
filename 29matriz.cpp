

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    const int x=1;
    int codigo[x];
    string endereco[x];
    string telefone[x];
    int busca;
    bool encontrar = false;
    
    for (int i=0; i<x; i++){
        cout<<"Código: "; cin>>codigo[i];
        cout<<"Endereço: "; cin>>endereco[i];
        cout<<"Telefore: "; cin>>telefone[i];
        
    }
    
    cout<<"Digite o código que deseja buscar:";
    cin>>busca;
    for (int i=0; i<x; i++){
        if(codigo[i]==busca){
            cout<<"Código encontrado"<<endl;
            cout<<"Código: "<<codigo[i] ;
            cout <<"Endereco: "<< endereco[i] << endl;
            cout <<"Telefone: "<< telefone[i] << endl;
            encontrar = true;
            break;
        }
    }
    
     if (!encontrar) {
        cout << "\nCliente com codigo " << busca << " nao encontrado." << endl;
    }

}
