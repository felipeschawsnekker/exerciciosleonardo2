//. Construir um algoritmo que leia dois valores numéricos inteiros e efetue aadição; caso o resultado seja maior que 10, apresenta-lo.

using namespace std;
#include <iostream>

int main (){
    
    int num1,num2;
   
    
    cout<<"Select a number: ";
    if (!(cin>>num1)){
        cout<<"Error";
        return 0;
    }
    
    cout<<"Select a number: ";
    if (!(cin>>num2)){
        cout<<"Error";
        return 0;
    }
    
    int plus=num1+num2;
    
    if (plus<=10){
        cout<<"Valor não será exibido";
    }
    else {
        cout<<"O valor da soma dos dois valores é: "<<plus;
    }
    
    return 0;
    
}
