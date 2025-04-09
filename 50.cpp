

using namespace std;
#include <iostream>
#include <iomanip>

int main(){
double wage;

    cout<<"Enter your wage: "; 
    if (!(cin>>wage)){
        cout<<"Error";
        return 0;
    }
    
    cout<<"Enter with your installment value: ";
    double installment;
    
     if (!(cin>>installment)){
        cout<<"Error";
        return 0;
     }
    
    if (wage==0 || installment==0){
        cout<<"Invalid values, try again";
        return 0;
    } 
    
    if (installment > 0.3 * wage){
        cout<<"Invalid installment";
    }
    else if (installment <= 0.3 * wage){
        cout<<"The loan can be granted";
    }
    
    return 0;
    }
