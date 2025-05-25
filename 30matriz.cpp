
#include <iostream>
using namespace std;

int main(){
    int x=4;
    int y=5;
    
    double matriz[x][y];
    
    cout<<"Digite o valor: "<<endl;
    
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
        cout<<"["<<i<<"]"<<" "<<"["<<j<<"] ; ";
        cin>>matriz[i][j];
    }
    }
    cout<<"\n---------------------------------\n"<<endl;
    for (int i=0; i<x; i++){
    cout<<"[ ";
  for(int j=0;j<y; j++){
      cout<<matriz[i][j]/2.0<<" ";
  }
  cout<<"]";
  cout<<endl;
}
return 0;
}
