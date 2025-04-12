

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    string ret = "Triangulo Retângulo";
    string obt = "Triangulo Obtusangulo";
    string acu = "Triangulo acutangulo";
    string inv = "Triangulo Invalido";
    double maior,menor,meio;
    
    cout<<"Digite 3 lados de um triangulo"<<endl;
    double a,b,c;
    cin>>a>>b>>c;
    
    
    
    //TRIANGULO RETANGUlO
    maior=a;
    menor=a;
    
    
    
    if(b>a) maior=b; meio=c;
    if(c>a) maior=c; meio=b;
    
    if(b<a) menor=b; meio=c;
    if(c<a) menor=c; meio=b;
    
    if(menor+meio>maior){
        if(pow(maior,2)==pow(menor,2)+pow(meio,2)){
        cout<<ret;}
    
        else if(pow(maior,2)>pow(menor,2)+pow(meio,2)) cout<<obt;
    
        else if(pow(maior,2)<pow(menor,2)+pow(meio,2)) cout<<acu;
        
        else cout<<inv;
        
        
    } else cout<<inv; return 1;
    



    
    return 0;
}
