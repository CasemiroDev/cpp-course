#include <iostream>

using namespace std;

int main()
{
    int qtd;
    int counter = 0;
    int x;
    int y = 0;
    int min;
    int max;
    
    cout<<"Quantos valores você quer digitar: ";
    cin>>qtd;
    
    if (qtd > 0){
    cout<<"Digite um valor para x > 0: ";
    cin>>x;
    min = x;
    max = x;
    }
    
    if (x>0 && qtd > 0){
    do{
        cout<<"Digite um valor para x > 0: ";
        cin>>x;
        
        if (x < min){
            min = x;
        }
        if (x > max){
            max = x;
        }
        y = x;
        counter += 1;
        
    }
    while (counter < qtd - 1 && x>0);
    cout<<"O valor máximo é: "<<max<<endl;
    cout<<"O valor mínimo é: "<<min<<endl;
    }
    if (x < 0){
        cout<<"Você digitou um valor menor que 0";
    }
    if (qtd < 0){
        cout<<"Você digitou um valor inválido para a quantidade";
    }
    

    return 0;
}