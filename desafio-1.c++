#include <iostream>

using namespace std;

int main()
{
    int cod;
    float qtd;
    float dvd;
    
    cout<<"Digite o código do seu produto: "<<endl;
    cin>>cod;
    if (cod == 1001  || cod == 1324 || cod == 6548 || cod == 9087 || cod == 7623){
    cout<<"Qual a quantidade comprada: "<<endl;
    cin>>qtd;
    }
    else{
        cout<<"Você digitou um valor fora das opções\n";
    }
    
    
    
    if (cod == 1001) {
        dvd = 5.32 * qtd;
        cout<<"Sua dívida é: "<<dvd;
    }
    else if (cod == 1324) {
        dvd = 6.45 * qtd;
        cout<<"Sua dívida é: "<<dvd;
    }
    else if (cod == 6548) {
        dvd = 2.37 * qtd;
        cout<<"Sua dívida é: "<<dvd;
    }
    else if (cod == 9087) {
        dvd = 5.32 * qtd;
        cout<<"Sua dívida é: "<<dvd;
    }
    else if (cod == 7623) {
        dvd = 6.45 * qtd;
        cout<<"Sua dívida é: "<<dvd;
    }
    else{
        cout<<"Seu código não está tabelado nos produtos";
    }
    return 0;
}