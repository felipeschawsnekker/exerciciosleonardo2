#include <iostream>
#include <string>
using namespace std;

int main(){
    int size=10;
    string name[size];
    
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" name: ";
        getline (cin,name[i]);
    }
    
    cout<<"---------------Name list---------------"<<endl;
    for (int i=0; i<size; i++){
        cout<<i+1<<". "<<name[i]<<endl;
    }
    
    return 0;
}
