#include <iostream>
using namespace std;

int main(){
    int x=3;
    int y=3;
    
    double matriz[x][y];
    
    cout<<"Digite o valor: "<<endl;
    
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
        cout<<"["<<i<<"]"<<" "<<"["<<j<<"] -> ";
        cin>>matriz[i][j];
    }
    }
    
    cout<<"\n \t TODOS MENOS A DIAGONAL PRINCIPAL \t \n";
    
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            if (i==j){
        cout<<" - ";
    } else cout<<matriz[i][j];
        }
        cout<< " ]";
        cout<<endl;
    }
    
   
    
   
return 0;
}
