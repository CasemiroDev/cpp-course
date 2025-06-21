#include <iostream>

using namespace std;

int main()
{
    float first;
    float second;
    int op;
    float result;
    cout<<"Qual operação você quer realizar?\n[1] - Adição\n[2] - Subtração\n[3] - Multiplicação\n[4] - Divisão\n";
    cin>>op;
    
    switch (op) {
        
        case 1:
        cout<<"Qual seu primeiro número da operação?";
        cin>>first;
        cout<<"Qual o seu segundo número da operação?";
        cin>>second;
        
        result = first + second;
        cout<<"Seu resultado é: "<<result;
        break;
        
        case 2:
        cout<<"Qual seu primeiro número da operação?";
        cin>>first;
        cout<<"Qual o seu segundo número da operação?";
        cin>>second;
        
        result = first - second;
        cout<<"Seu resultado é: "<<result;
        break;
        
        case 3:
        cout<<"Qual seu primeiro número da operação?";
        cin>>first;
        cout<<"Qual o seu segundo número da operação?";
        cin>>second;
        
        result = first * second;
        cout<<"Seu resultado é: "<<result;
        break;
        
        case 4:
        cout<<"Qual seu primeiro número da operação?";
        cin>>first;
        cout<<"Qual o seu segundo número da operação?";
        cin>>second;
        
        result = first / second;
        cout<<"Seu resultado é: "<<result;
        break;
        
    }

    return 0;
}