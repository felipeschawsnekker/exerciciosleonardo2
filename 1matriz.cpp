#include <iostream>
using namespace std;

int main(){
    
    int x=3;
    int y=3;
    int matriz[x][y];
    
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            cout<<"["<<i<<"]"<<""<<"["<<j<<"] = ";
        cin>>matriz[i][j];
    }
}
    cout<<"\n******MATRIZ ORIGINAL******\n";
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }

    cout<<"\n******MATRIZ COM OS ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL******\n";
    for (int i=0; i<x; i++){
        cout<<"[ ";
        for (int j=0; j<y; j++){
            if (i>j){
            cout<<matriz[i][j]<<" ";
        }
        else cout<<" - ";
        }
        cout<<"]";
        cout<<endl;
}

}
