
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Primeiro termo: "; cin>>a;
    cout<<"Segundo termo: "; cin>>b;
    
    cout<<"Quantos termos voce quer: "<<endl;
    int n;
    cin>>n;
    
     cout << "Série de Fetuccine: " << a << " " << b << " ";
    
    int c;
    for (int i=2; i<n; i++){
        if (i%2==0) c=b-a;
        else c=b+a;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
    
    
    return 0;
    
    
}
