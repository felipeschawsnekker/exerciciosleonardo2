
#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    
    double height,weight;
    char sex;
    
    cout<<"Enter your height (in metters): "; cin>>height;
    cout<<"Enter your sex (W or M): "; cin>>sex;
    
    if(sex=='M' || sex=='m') weight= (72,70) * (height) - 58.00;
    else if(sex=='W'|| sex=='w') weight= (62,1) * (height) - 44.7;
    else cout<<"Use M or W";
    
    cout<<"Your ideal weight is: "<<weight;
    return 0;
}
