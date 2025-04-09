//3. Entrar com um número e exibi-lo caso seja maior que 20

#include <iostream>
using namespace std;

int main(){
    double num;
    
    cout<<"Choose a number: "; 
    if (!(cin>>(num))){
        cout<<"Error";
        return 0;
    } 
    
    if (num<=20){
        cout<<"Seu numero não será exibido";
    } 
    else  {
        cout<<"Seu numero é: "<<num;
}
return 0;
}
