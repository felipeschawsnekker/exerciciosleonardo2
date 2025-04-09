
#include <iostream>
using namespace std;

int main (){
    int num;
 cout<<"Choose a number: "; 
    if (!(cin>>num)){
        cout<<"Error";
        return 0;
    }
    
    double division=num%5;
    
    if (division==0){
        cout<<"Numero divisivel por 5"<<endl;
    } 
    else if (division==1){
        cout<<"Numero não divisivel por 5"<<endl;
    }
    else if (num==0) {
        cout<<"Numero nulo"<<endl;
    } 
    else {
        cout<<"Error"<<endl;
    }
    
    return 0;
    
}
