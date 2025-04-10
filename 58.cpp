using namespace std;
#include <iostream>
#include <string>

int main (){
    
    double num1,num2;
    string a="Try again";
    string b="The crescent order is: ";
    
    cout<<"Number one: "; 
    if (!(cin>>num1)) {
        
        cout<<a;
        return 0;
        
    }
    
     cout<<"Number two: "; 
    if (!(cin>>num2)) {
        
        cout<<a;
        return 0;
    }
    
    if (num1>num2){
        cout<<b<<num2<<" and "<<num1;
    }
    
    else if(num1<num2){
        cout<<b<<num1<<" and "<<num2;
    }
    
    else cout <<num1<<" and "<<num2<<" are equal ";
    
   
    
    return 0;
}
