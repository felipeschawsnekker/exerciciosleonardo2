#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double wage,discount;
    
    
    
    cout<<"Enter your wage: "<<endl;
    cin>>wage;
    
    if(wage<=600) discount=0;
    if(wage>600 && wage<=1200) discount=0.20;
    if(wage>1200 && wage<=2000) discount=0.25;
    if (wage>1200) discount=0.30;
    
    double x=discount*wage;
    
    cout<<fixed<<setprecision(2);
    cout<<"Your INSS Discount is: R$"<<x;
    return 0;
}
