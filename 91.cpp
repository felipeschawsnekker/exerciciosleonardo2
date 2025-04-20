

using namespace std;
#include <iostream>

int main (){
    
    int a,b;
    cout<<"Digite o primeiro numero(Multiplicador): ";
    cin>>a;
    
    cout<<"Digite o segundo numero(Multiplicando): ";
    cin>>b;
    
    if(a<0 || b<0){
        cout<<"Numero menor que zero.";
        return 0;
    }
    
    if(b>a){
    cout<<"Multiplicando maior que o multiplicador";
    return 0;
}
    else if (b<a){
        cout<<"O cálculo do multiplicador * multiplicando é: "<<a*b;
    }
    
    return 0;
}
