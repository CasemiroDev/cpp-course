#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int x;
    long long int fat;
    
    cout<<"Digite um número inteiro positivo: ";
    if(scanf("%lld", &x) != 1){
        cout<<"Entrada inválida, digite um número.";
        return 1;
    }
    
    
    
    if (x >= 0){
        cout<<"Entrada: "<<x<<endl;
        fat = x;
        for(int i = 1; i < x; i += 1){
            fat = (fat)*(x-i);
        }
        cout<<"Saída: "<<fat<<endl;
    }
    else {
        cout<<"Entrada inválida, tente novamente.";
    }

    return 0;
}