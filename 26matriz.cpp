#include <iostream>
using namespace std;

int main(){
    
    int x=4;
    
    int a[x];
    
    for(int i=0; i<x; i++){
        cout<<"Digite um número: ";
        cin>>a[i];
    }
    
    for(int i=x - 1; i>=0; i--){
        
        cout<<a[i]<<endl;
    }
    
}
