#include <iostream>

using namespace std;

int main() {
    
    float m, h;
    cout<<"Olá usuário, digite seu peso corporal: "<<endl;
    cin>>m;
    cout<<"Agora digite sua altura: "<<endl;
    cin>>h;
    
    float imc = m/(h*h);
    
    cout<<"Seu imc é "<<imc<<endl;
    
    if (imc < 18.5) {
        cout<<"Usuário abaixo do peso"<<endl;
    }
    else{
        if (imc >= 18.5 && imc < 24.9){
            cout<<"Usuário com peso saudável"<<endl;
        }
        if (imc >= 25.0 && imc < 29.9){
            cout<<"Usuário com sobrepeso"<<endl;
        }
        if (imc > 30.0){
            cout<<"Usuário com obesidade"<<endl;
        }
    }
    
    return 0;
}