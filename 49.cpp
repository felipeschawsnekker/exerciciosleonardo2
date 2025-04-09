//Entrar com número e informar se ele é divisível por 10, por 5, por 2 ou se não é divisível por nenhum destes.
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
    
    if (num%2==0 && num%5==0 &&num%10==0){
        cout<<"Numero divisivel por 2, 5 e 10"<<endl;
    } 
    
    else {
        cout<<"Numero não divisivel por 2, 5 e 10"<<endl;
    }
   
    
    return 0;
    
}
