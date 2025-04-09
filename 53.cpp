#include <string>
using namespace std;
#include <iostream>
#include <cctype>

int main (){
    string name;
    int age;
    int i;
    char sex;

    cout<<"Enter your name: ";
    getline(cin,name);
    
     while (name.empty()){
        cout<<"Nome vazio. Tente novamente: ";
        getline(cin,name);
    }
    
    int validname = 1;
    
    while (true) {
    validname=1;
    
    for (char caractere:name)
        {
    if(!isalpha(caractere) && caractere != ' '){
    validname=0;
     break;
            }
        }
    
    if(validname){
        i=1;
        break;
    }
    
    else {
        cout<<"Nome invalido, use apenas letras: ";
        getline(cin,name);
    }
    
    }
    
    cout<<"What's your age: ";
    cin>>age;
    
    cout<<"What's your sex? (F for Woman, M for Man): ";
    cin>>sex;
    
    if ((sex=='f'|| sex=='F') && age<25){
        cout<<"Accept";
    } else cout<<"Not accept";
    

return 0;
}
