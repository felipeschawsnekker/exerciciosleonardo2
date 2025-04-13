
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string team;
    cout<<"Choose your team (A,B,C): ";
    getline(cin,team);
    
    double a,b,c;
    cout<<"Enter your point value, player 1: "; cin>>a;
    cout<<"Enter your point value, player 2: "; cin>>b;
    cout<<"Enter your point value, player 3: "; cin>>c;
    
    double maior,menor,meio;
    
   
    if(a>b && a>c){
        maior=a;
        if(b>c){
            meio=b;
            menor=c;
        } else {
            meio=c;
            menor=b;
        }
    }
    
    if(b>a && b>c){
        maior=b;
        if(a>c){
            meio=a;
            menor=c;
        } else {
            meio=c;
            menor=a;
        }
    }
    
      if(c>a && c>b){
        maior=c;
        if(a>b){
            meio=a;
            menor=b;
        } else {
            meio=b;
            menor=a;
        }
    }
    
    cout<<"Descending order: "<<maior<<" , "<<meio<<" , "<<menor<<endl;
    
    double soma=(maior+meio+menor);
    
    if(soma>100){
        cout<<"Average: "<<soma/3;
    } else cout<<"Team disqualified";
    
    return 0;
    
    
    
}
