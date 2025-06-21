#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <numeric>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> values;
    vector<int> par;
    int impar = 0;
    int x = 0;
    
    for (int i = 1; i <= 10; i += 1) {
        
        cout << "Digite um número inteiro (ou 0 para sair): ";
        if(scanf("%d", &x) != 0){
        
            if (x == 0){
                cout << "Você escolheu sair!\n";
                break;
            }
            
            values.push_back(x);
            
        }
        else{
            cout << "Você digitou um valor não inteiro! Tente novamente.\n";
            break;
        }
    }
    
    if (!values.empty()){
        int max = *std::max_element(values.begin(), values.end());
        // desferencia, ou seja, retorna iterador ou em outras palavras, um valor em uma posição especifica do vetor
        cout << "Maior número: " << max << endl;
    }
    else {
        cout << "Nenhum número foi digitado!\n";
    }
    
    for (int a = 0; a < values.size(); a += 1){
        if (values[a] % 2 == 0) {
            par.push_back(values[a]);
        }
    }
    
    if (!values.empty()){
    int sum = accumulate(par.begin(), par.end(), 0);
    // 0 é o valor inicial da soma, definido pela função.
    // Não precisa desferenciar pois ele soma tudo e não retorna algo do vetor em si.
    cout << "Soma dos pares: " << sum << endl;
    }
    if (!values.empty()){
    for (int u = 0; u < values.size(); u += 1){
        if (values[u] % 2 != 0) {
            impar += 1;
        }
    }
    
    cout << "Total de ímpares: " << impar << endl;
    }

    return 0;
}