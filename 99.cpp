#include <iostream>
using namespace std;

int main(){
    int num;
    int fatorial=1;
    cout<<"Digite seu numero: "; cin>>num;
    
    if(num<1){
        cout<<"Encerrando programa";
        return 0;
    }
    
    if(num==1){
        cout<<"Fatorial: 1"<<endl;
        
    }
    
    for(int i=1;i<=num; i++){
        fatorial = fatorial * i;
}

cout<<"Fatorial: "<<fatorial;

return 0;
}
