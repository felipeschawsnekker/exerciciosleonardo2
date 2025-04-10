using namespace std;
#include <iostream>
#include <string>

int main (){
    
    double num1,num2;
    string a="Try again";
    
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
    
    if (num1==num2){
        cout<<"It's equal";
    }
    
    else cout<<"It isn't equal";
    
    return 0;
}
