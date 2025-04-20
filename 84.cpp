

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double p;
    
    cout<<"Digite quantas polegadas (1 a 20): "; cin>>p;
    
    if(p<1 || p>20){
        cout<<"Limite excedido";
        return 0;
    }
    
    double c=p*2.54;
    
    cout<<fixed<<setprecision(2);
    cout<<"Em centimetros: "<<c<<" cm"<<endl;
    
    
    cout<<"Polegadas inteiras: "<<int(p)<<endl;
    
    return 0;
    
}
