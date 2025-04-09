
#include <iostream>
using namespace std;

int main()
{
    double num;
    
    cout<<"Enter a number: ";
    if(!(cin>>num)){
        cout<<"Error";
        return 1;
    }
    
    if (num<20 || num>90){
        cout<<"Not in range"<<endl;
    }
    else{
        cout<<"In range"<<endl;
    }
        

    return 0;
}
