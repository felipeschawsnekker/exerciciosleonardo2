


#include <iostream>
#include <string>
using namespace std;

int main(){
    double venda[10];
    double compra[10];
    int a=0;
    int b=0;
    int c=0;
    
    for(int i=0; i<10; i++){
        
        cout<<"******** Item "<<i+1<<" ********"<<endl;
        cout<<"Valor de compra: ";
        cin>>compra[i];
        cout<<"Valor de venda: ";
        cin>>venda[i];
        
        
        double lucro = (((venda[i] - compra[i]) / compra[i]) * 100);
        
        if(lucro<10.0) a++;
        else if(lucro>=10.0 || lucro<=20.0) b++;
        else c++;
        
        cout<<"--------------------------------------------------"<<endl;
    }
    cout << "Lucro < 10%: " << a << endl;
    cout << "Lucro entre 10 e 20%: " << b << endl;
    cout << "Lucro > 20%: " << c << endl;
    return 0;
}
