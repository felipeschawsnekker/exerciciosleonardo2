#include <iostream>
using namespace std;

int main(){
const int a=4;
int num[a];

for (int i=0; i<a; i++){
    cout<<"Digite um número: ";
    cin>>num[i];
}

cout<<"-----------------------------------------"<<endl;
for (int i=0; i<a; i++){
    cout<<num[i]<<" ";
}

return 0;
}
