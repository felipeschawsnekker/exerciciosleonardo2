
#include <iostream>
using namespace std;

int main(){
    double num;
    double soma=0;
    
    for(int i=0; i<20; i++){
        
        cout<<"Enter a number: "; cin>>num;
        
            if(num<15 && num>-15){
        
                soma = soma + num;
            }
        
    }
    cout<<"A soma é: "<<soma;
    
    return 0;
}
