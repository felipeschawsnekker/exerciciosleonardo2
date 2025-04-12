//Entrar com três números e exibi-los em ordem decrescente (suponha números diferentes)


#include <iostream>
using namespace std;

int main (){
    double num1,num2,num3,maior,menor,meio;
    
    cout<<"Escolha 3 numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    if (num1>num2 && num1>num3){
        maior=num1;
        if(num2>num3){
            menor=num3;
            meio=num2;
            cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
        } else {
            menor=num2;
            meio=num3;
            cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
        }
    }
    
    if (num2>num1 && num2>num3){
        maior=num2;
        if(num1>num3){
            menor=num3;
            meio=num1;
            cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
            } else {
                menor=num1;
                meio=num3;
                cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
            }
    }
    
    if(num3>num2 && num3>num1){
        maior=num3;
        if(num1>num2){
            menor=num2;
            meio=num1;
            cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
        } else {
            menor=num1;
            meio=num2;
            cout<<"Ordem crescente: "<<menor<<" , "<<meio<<" , "<<maior;
        }
        }
        
    
    
    
    return 0;
}
