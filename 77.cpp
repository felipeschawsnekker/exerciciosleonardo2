

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    double value,profit,percent;
    
    cout<<"Enter product value : "; cin>>value;
    
    cout<<fixed<<setprecision(2);
    if(value<20) percent = (1.00 + 0.45);
    else percent = (1 + 0.30);
    
    profit=value*percent;
    
    cout<<"The sale value is: "<<profit;
    return 0;
}
