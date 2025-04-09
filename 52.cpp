
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
    
    if (num<20){
        cout<<"Lower than 20"<<endl;
    }
    else if(num>20){
        cout<<"Greater than 20"<<endl;
    }
    else {
        cout<<"Equal a 20";
    }
        

    return 0;
}
