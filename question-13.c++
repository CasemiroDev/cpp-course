#include <iostream>

using namespace std;

int main()
{
    int idade;
    int counter = 1;
    int qtd = 0;
    
    do {
        cout<<"Digite a idade da "<<counter<<"ª pessoa: ";
        cin>>idade;
        
        counter += 1;
        
        if (idade <= 18){
            qtd += 1;
        }
    }
    while (counter <= 10);
    
    cout<<"A quantidade de pessoas menores de idade ou igual a 18 anos são: "<<qtd;

    return 0;
}