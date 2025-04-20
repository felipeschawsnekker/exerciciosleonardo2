using namespace std;
#include <iostream>

int main(){
    
    cout<<"Quantos numeros tu deseja digitar? ";
    int num;
    cin>>num;
    
    double quant,maior;
    
    for (int i=0; i<num; i++){
        cout<<endl;
        cin>>quant;
        
        if (i == 0) {
        maior = quant;
        } 
        else if (quant > maior) {
            maior = quant;
        }
    
    
    }
    cout<<"O maior é: "<<maior;
    return 0;
}
