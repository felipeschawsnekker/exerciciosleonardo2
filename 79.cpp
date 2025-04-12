
#include <iostream>
using namespace std;

int main(){
    int age;
    
    cout<<"Enter your age: "; cin>>age;
    
    if(age<5) cout<<"Invalid";
    if(age>=5 && age<=7) cout<<"Infantil A";
    if(age>=8 && age<=10) cout<<"Infantil B";
    if(age>=11 && age<=13) cout<<"Juvenil A";
    if(age>=14 && age<=17) cout<<"Juvenil B";
    if (age>=18) cout<<"Senior";
    
    return 0;
}
