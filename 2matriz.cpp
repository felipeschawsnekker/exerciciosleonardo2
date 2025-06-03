#include <iostream>
using namespace std;

int main(){
    
    int a=2;
   int matriz[a][a];
   
   cout<<"First matriz"<<endl;
   for(int i=0; i<a; i++){
       for(int j=0; j<a; j++){
       cout<<"["<<i<<" "<<j<<"] ";
       cin>>matriz[i][j];
   }
   }
   
   cout<<"Second matriz"<<endl;
   int matrizb[a][a];
   for(int i=0; i<a; i++){
       for(int j=0; j<a; j++){
       cout<<"["<<i<<" "<<j<<"] ";
       cin>>matrizb[i][j];
   }
   }
   cout<<"\n \n"<<endl;
   cout<<"First matriz"<<endl;
   for (int i=0; i<a; i++){
       cout<<"[ ";
       for (int j=0; j<a; j++){
           cout<<matriz[i][j]<<" ";
           
       }
       cout<<"]";
       cout<<endl;
   }
   cout<<"\n \n"<<endl;
   cout<<"Second matriz"<<endl;
   for (int i=0; i<a; i++){
       cout<<"[ ";
       for (int j=0; j<a; j++){
           cout<<matrizb[i][j]<<" ";
           
       }
       cout<<"]";
       cout<<endl;
   }
   
   bool saoiguais=true;
   for (int i=0; i<a; i++){
       for (int j=0; j<a; j++){
           if (matriz[i][j] == matrizb[i][j]){
              
               saoiguais=true;
               
          
           }
           else if(matriz[i][j] != matrizb[i][j]) {
               saoiguais=false;
              
              
           }
           
       }
   }
   cout<<"\n \n";
   if (saoiguais==true) cout<<"São iguais"<<endl;
   else if (saoiguais==false) cout<<"Não são iguais"<<endl;
   
   
   
   int soma[a][a];
   int subtracao[a][a];
   int multiplicacao[a][a];
   
   for (int i=0; i<a; i++){
       for (int j=0; j<a; j++){
     soma[i][j] = matriz[i][j] + matrizb[i][j];
     subtracao[i][j] = matriz[i][j] - matrizb[i][j];
     multiplicacao[i][j] = 0;
       }
   }
   
   
   
  for (int i=0; i<a; i++){
       for (int j=0; j<a; j++){
           for (int x=0; x<a; x++) {
               multiplicacao[i][j] += matriz[i][x] * matrizb[x][j];
           }
       
       }
  }
   
   cout<<"\n \n";
   cout<<"Matriz soma"<<endl;
   for (int i=0; i<a; i++){
       cout<<"[ ";
       for (int j=0; j<a; j++){
           cout<<soma[i][j]<<" ";
           
       }
       cout<<"]";
       cout<<endl;
   }
   
    cout<<"\n \n";
   cout<<"Matriz subtracao"<<endl;
   for (int i=0; i<a; i++){
       cout<<"[ ";
       for (int j=0; j<a; j++){
           cout<<subtracao[i][j]<<" ";
           
       }
       cout<<"]";
       cout<<endl;
   }
   
     cout<<"\n \n";
   cout<<"Matriz multiplicacao"<<endl;
   for (int i=0; i<a; i++){
       cout<<"[ ";
       for (int j=0; j<a; j++){
           cout<<multiplicacao[i][j]<<" ";
           
       }
       cout<<"]";
       cout<<endl;
   }
   return 0;
}
