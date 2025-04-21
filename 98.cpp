
#include <iostream>
using namespace std;

int main (){
    
   int chico=150,juca=110;
   int c=2,j=3;
   int n=0;
   
   while(juca<=chico){
       chico= chico+c;
       juca= juca + j;
       n++;
   }
   
   cout<<"Irá demorar: "<<n<<" anos."<<endl;
   
   return 0;
   
   
   
   
}
