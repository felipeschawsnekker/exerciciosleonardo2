//Entrar com um número e informar se ele é divisível por 3 e por 7.
#include <iostream>
using namespace std;

int main (){
    int num;
 cout<<"Choose a number: "; 
    if (!(cin>>num)){
        cout<<"Error";
        return 0;
    }
    
    
    
    if (num==0){
        cout<<"Numero nulo";
        return 1;
    }
    
    if (num%3==0 && num%7==0){
        cout<<"Numero divisivel por 3 e 7"<<endl;
    } 
    
    else {
        cout<<"Numero não divisivel por 3 e por 7"<<endl;
    }
   
    
    return 0;
    
}
