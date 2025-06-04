

using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int a=7;
    int matriz[a][a];
    cout<<"******LANÇAMENTO DE DADOS******"<<endl;
    
    for(int i=1; i<a; i++){
        cout<<"[ ";
        for (int j=1; j<a;j++){
            cout<<i<<","<<j<<" ; ";
        }
        cout<<"]";
        cout<<endl;
    }
    
    srand(time(0));
    
    int num;
    cout<<"How many times do you wanna run that?"<<endl;
    cin>>num;
    
    int duploseis=0;
    
    
    for(int i=0; i<num; i++){
        int dado1=(rand() % 6) + 1;
        int dado2=(rand() % 6) + 1;
        if(dado1==6 && dado2==6) duploseis++;
    }
    
    cout<<"Probabilidade:"<<double(duploseis)/double(num)<<endl;
    cout<<"Caiu exatamente: "<<duploseis<<" duplo seis";
    }
    
