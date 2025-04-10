using namespace std;
#include <iostream>
#include <string>

int main (){
    
    string state;
    
    cout<<"Choose a state (RJ,MG,SP,etc...): ";
    
    getline(cin,state);
    
    if (state=="MG" || state=="mg" || state=="Mg" || state=="mG"){
        cout<<"Your state is Minas Gerais";
    }
    
    else if (state=="RJ" || state=="Rj" || state=="rj" || state=="rJ"){
        cout<<"Your state is Rio de Janeiro";
    }
    
    else if (state=="SP" || state=="Sp" || state=="sp" || state=="sP"){
        cout<<"Your state is Sao Paulo";
    }
    
    else cout<<"Other states";
    
    return 0;
}
