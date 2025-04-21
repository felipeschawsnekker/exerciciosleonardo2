

using namespace std;
#include <iostream>

int main(){
    double nota;
    double idade;
    int i3=0;
    int i2=0;
    int i1=0;
    int somai3=0;
    int mediai3=0;
    double percentual2;
    
    cout<<"Notas: \n 3-EXCELENTE \n 2-BOM \n 1-Regular"<<endl;
    
    
    for(int i=0; i<20; i++){
        cout<<"Entre com a sua idade: "; cin>>idade;
        cout<<"Entre a nota: "; 
        cin>>nota;
        cout<<endl;
        if(!(nota>=1 && nota<=3)){
            cout<<"Valor inválido. Encerrando programa.";
            break;
            return 0;
        }
        else {
            
            if(nota==3) {
                i3++;
                somai3 = somai3+idade;
            }
            
            if(nota==2) i2++;
            if(nota==1) i1++;
        
     
        
    }
    }
    
    if(i3>0) mediai3=(double)somai3/i3;
    
    percentual2= i2 * 0.2;
    
    cout << "Media das idades de quem respondeu EXCELENTE: " << mediai3 << endl;
    cout << "Quantidade de pessoas que responderam REGULAR: " << i1 << endl;
    cout << "Porcentagem de respostas BOM: " << percentual2<< "%" << endl;


return 0;
}
