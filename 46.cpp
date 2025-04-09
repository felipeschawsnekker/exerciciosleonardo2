

using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    
    double num1;
    
    cout<<"Select a number: ";
     if (!(cin>>num1)){
         cout<<"Error";
         return 1;
     }
     
     cout<<defaultfloat<<setprecision(4);
     if (num1>0){
         
          double raiz=sqrt(num1);
         cout<<"A raiz quadrada é: "<<raiz;
     } 
     
     else if (num1<0){
         double quadrado= pow(num1,2);
         cout<<"O quadrado do numero é: "<<quadrado;
     } 
     
     if (num1==0) {
     cout<<"Numero nulo"<<endl;
     }
     
     return 0;
     
}
     
     
     
     
     
 
