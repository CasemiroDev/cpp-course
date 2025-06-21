#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x;
    int valid = 1;
    int number = 20;
    
    cout<<"Olá usuário! Escolha tente adivinhar o número que eu escolhi entre 1 e 20: \n";
    
    for (int i=1;i<=5 && valid == 1;i += 1){
        if(scanf("%d", &x) != 0){
            if (x <= 20 && x >= 1){
                cout<<"Essa foi a sua "<<i<<"ª tentativa.\n";
            
                if (x == number){
                    valid = 0;
                }
                if (valid == 1){
                    if (x > number){
                        cout<<"O número que você escolheu é maior do que o número a ser adivinhado. Tente novamente:\n";
                    }
                    else{
                        cout<<"O número que você escolheu é menor do que o número a ser adivinhado. Tente novamente:\n";
                    }
                }
            }
            else{
                cout<<"Você digitou um número fora do intervalo desejado, tente novamente.\n";
                i -= 1;
            }
        }
        else{
            cout<<"Você digitou um valor que não era um número.\n";
            break;
        }
    }
    if (valid == 1){
        cout<<"Você perdeu! O número era: "<<number<<endl;
    }
    if (valid == 0){
        cout<<"Parabéns, você acertou!";
    }
    if (valid == 3)

    return 0;
}