#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int sum;
    int val;
    
    vector<int> vetor;
    vetor.push_back(0);
    vetor.push_back(x);
    vetor.push_back(y);
    
    for (int i = 0; i <= 40;i += 1){
        sum = x+y;
        y = x;
        x = sum;
        vetor.push_back(sum);
    }
    
    cout<<"Digite um valor para fazer a verificação se está na sequência de Fibonacci: ";
    if(scanf("%d", &val) != 1){
        cout<<"A valor digitado não é um número!";
    }
    else {
        
        if (find(vetor.begin(), vetor.end(), val) != vetor.end()){
        auto it =find(vetor.begin(), vetor.end(), val);
        int indice = it - vetor.begin();
        
        cout<<"O valor digitado pertence a sequência de Fibonacci.\n";
        
        cout<<"A sequência de Fibonacci em ordem reversa do número escolhido é: ";
            for (int i = indice; i >= 0; i--){
                cout<<vetor[i]<<",  ";
        
            }
        cout<<"Este é o fim da sequência reversa.\n";
        }
        
        else{
            cout<<"O valor digitado não está na sequência de Fibonnaci.";
        }
    }
    
    /* Professor, admito que usei inteligência artificial para aprender as funções e bibliotecas
    , mas não colei diretamente nenhum código, inclusive pode me chamar que consigo explicar linha
    por linha do meu código :) */

    return 0;
}