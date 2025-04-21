

using namespace std;
#include <iostream>

int main(){
    
    int num;
    
    while (true){
        
        cout<<"Escolha um numero de quatro digitos (termina no 9999): ";
        cin>>num;
        
        if(num<1000 || num>=9999){
            cout<<"Número inválido. ";
            break;
            return 0;
        }
        
        int a= (num/100);
        int b= (num%100);
    
        
        if ((a + b) * (a + b) ==num) {
        cout<<"O número "<<num<<" apresenta esta caracteristica"<<endl;
        }
        else {
            cout<<"O número "<<num<<" não apresenta esta caracteristica"<<endl;
    }
    }
    
    return 0;
}
