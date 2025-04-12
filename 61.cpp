//. Entrar com três e exibir o maior número (suponha números diferentes

#include <iostream>
using namespace std;

int main (){
    double num1,num2,num3,maior;
    
    cout<<"Escolha 3 numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    if (num1>num2 && num1>num3){maior=num1;}
    if (num2>num1 && num2>num3){maior=num2;}
    if (num3>num2 && num3>num1){maior=num3;}
    
    cout<<"O maior numero é: "<<maior;
    
    return 0;
}
