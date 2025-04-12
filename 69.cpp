

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string i5 ="Igual a 5"; 
    string i200="Igual a 200" ; 
    string i400="Igual a 400"; 
    string in="Está no intervalo" ; 
    string fora="Fora do intervalo";
    
    int num;
    cout<<"Enter a number: "; cin>>num;
    
    if(num==5)cout<<i5<<endl;
    if(num==200)cout<<i200<<endl;
    if(num==400)cout<<i400<<endl;

    
    if(num>=500 && num<=1000) cout<<in;
    else cout<<fora<<endl;
}
