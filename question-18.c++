#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x;
    string op;
    int op_or;
    float divi;
    
    cout<<"Qual valor entre 1 e 10 você deseja receber a tabuada?\n";
    cin>>x;
    
    if (x >= 1 && x <=10){
        cout<<"Qual operador entre {+,=,x,/} você deseja visualizar na tabuada?\n";
        cin>>op;
        
        if(op == "+"){
            op_or = 1;
        }
        else if (op == "-"){
            op_or = 2;
        }
        else if (op == "x"){
            op_or = 3;
        }
        else if(op == "/"){
            op_or = 4;
        }
        else{
            cout<<"Tente novamente digitando um valor válido para os operadores\n";
        }
    }
    else{
        cout<<"Tente novamente com um valor válido para o número da tabuada";
    }
    
    if (op_or == 1){
        for(int i = 1;i <= 10; i += 1){
            cout<<i<<" + "<<x<<" = "<<i + x<<endl;
        }
    }
    if (op_or == 2){
        for(int i = 1; i <= 10; i += 1){
            cout<<i<<" - "<<x<<" = "<<i - x<<endl;
        }
    }
    if (op_or == 3){
        for(int i = 1; i <= 10; i += 1){
            cout<<i<<" x "<<x<<" = "<< i * x<<endl;
        }
    }
    if (op_or == 4){
        for(int i = 1; i <= 10; i += 1){
            divi = i/x;
            cout<<i<<" / "<<x<<" = "<< divi<<endl;
        }
    }

        

    return 0;
}