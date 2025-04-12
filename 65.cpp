


#include <iostream>
using namespace std;

int main (){
    double num1,num2,num3,num4,num5,maior,menor;
    
    cout<<"Escolha 5 numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    
    
    maior=num1;
    menor=num1;
    
    if(num2>maior) maior=num2;
    if(num3>maior) maior=num3;
    if(num4>maior) maior=num4;
    if(num5>maior) maior=num5;
    
    if(num2<menor) menor=num2;
    if(num3<menor) menor=num3;
    if(num4<menor) menor=num4;
    if(num5<menor) menor=num5;
    
    cout<<"O maior é: "<<maior<<endl;
    cout<<"O menor é: "<<menor<<endl;
    
    
    
    return 0;
}
