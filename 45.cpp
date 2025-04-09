

using namespace std;
#include <iostream>

int main(){
    
    double num1,num2;
    
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
     
     double soma=num1+num2;
     
     if (soma>20){
         soma = soma + 8;
         cout<<"O valor da soma, acrescido de 8 é de: "<<soma;
     }
     
     if(soma<=20){
         soma = soma - 5;
         cout<<"Como o valor é menor ou igual a vinte, subtraindo-se 5 o resultado é: "<<soma;
     }
     
     return 0;
}
