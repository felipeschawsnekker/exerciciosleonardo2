using namespace std;
#include <iostream>

int main(){
    
    cout<<"Quantos numeros tu deseja digitar? ";
    int num;
    cin>>num;
    
    double quant,menor;
    
    for (int i=0; i<num; i++){
        cout<<endl;
        cin>>quant;
        
        if (i == 0) {
        menor = quant;
        } 
        else if (quant < menor) {
            menor = quant;
        }
    
    
    }
    cout<<"O menor é: "<<menor;
    return 0;
}
