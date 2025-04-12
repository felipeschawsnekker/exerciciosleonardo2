
#include <iostream>
#include <string>
using namespace std;

int main (){
    int age;
    string m="minor";
    string o="of age";
    string e= "elderly (greater than 65)";
    
    cout<<"How old are you? ";
    cin>>age;
    
    if(age<18) cout<<m;
    
    if (age>=18 && age<=65) cout<<o;
    
    else cout<<e;
    
    return 0;
    }
