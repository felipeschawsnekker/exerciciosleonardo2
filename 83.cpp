#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double x,fx;
    
    cout<<"Enter X: "; cin>>x;
    
    if(x<=1) fx=1;
    if(x>1 && x<=2) fx=2;
    if(x>2 && x<=3) fx=pow(x,2);
    if(x>3) fx=pow(x,3);
    
    cout<<fixed<<setprecision(3);
    
    cout<<"F(X) = "<<fx;
    return 0;
}
