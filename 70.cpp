

#include <iostream>
using namespace std;
#include <string>

int main (){
    double pr1,pr2,media;
    string ap="Aprovado";
    string re="Reprovado";
    string pr="Prova final";
    
    cout<<"Enter your PR1 and PR2: "<<endl;
    cin>>pr1>>pr2;
    
    media=(pr1+pr2)*0.5;
    
    if(media>=7) cout<<ap;
    if(media <7 && media>3) cout<<pr;
    if(media < 3) cout<<re;
    
    return 0;
}
