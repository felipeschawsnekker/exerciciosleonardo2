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
    
    cout<<"\n \t DIAGONAL PRINCIPAL \t \n";
    
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            if (i==j){
        cout<<matriz[i][j]<<" ";
    } else cout<<" - ";
        }
        cout<< " ]";
        cout<<endl;
    }
    
    cout<<"\n \t TRIANGULO SUPERIOR \t \n";
    
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            if (j>i){
        cout<<matriz[i][j]<<" ";
    } else cout<<" - ";
        }
        cout<< " ]";
        cout<<endl;
    }
    
    
    cout<<"\n \t TRIANGULO INFERIOR\t \n";
    
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            if (i>j){
        cout<<matriz[i][j]<<" ";
    } else cout<<" - ";
        }
        cout<< " ]";
        cout<<endl;
    }
    
   
return 0;
}
