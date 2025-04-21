
#include <iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Escolha qual tabuada deva ser exibida(1,2,3,4,5,6,7,8,9,10...): ";
    cin>>a;

    for(int i=1; i<=10; i++){
        cout<<a*i<<endl;
    }
    
    return 0;
    
}
