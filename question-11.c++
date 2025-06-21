#include <iostream>

using namespace std;

int main()
{
    float idc;
    cout<<"Qual o índice de poluição medido?";
    cin>>idc;
    
    if (idc > 0.05){
        if (idc >= 0.3 && idc < 0.4){
            cout<<"As industrias do 1ª grupo estão intimadas a suspender suas atividades.";
        }
        else if (idc >= 0.4 && idc <0.5){
            cout<<"As industrias do 1ª e 2ª grupo estão intimadas a suspender suas atividades.";
        }
        else {
            cout<<"Todas as industrias de todos os grupos devem suspender suas atividades.";
        }
    }
    else {
        cout<<"Parabéns cidade limpa!";
    }
    
    return 0;
}