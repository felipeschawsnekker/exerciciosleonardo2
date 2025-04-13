#include <iomanip>
#include <iostream>
using namespace std;

int main (){
    double x,fx;
    
    cout<<"Enter X: "; cin>>x;
    
    if(x==2){
        cout<<"No Solution";
        return 0;
    }
    
    cout<<fixed<<setprecision(3);
    fx = (8 / (2-x));
    
    cout<<"F(X) = "<<fx;
    return 0;
}
