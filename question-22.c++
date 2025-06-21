#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    
    int first;
    int second;
    vector<int> list;
    
    cout << "Digite o número inicial do intervalo: \n";
    
    if(scanf("%d", &first) != 0) {
        
        cout << "Digite o número final do intervalo: \n";
        
        if(scanf("%d", &second) != 0 && second > first) {
            
            for (int a = first; a <= second; a += 1) {
                
                int x;
                int sum;
                int num;
                char str[2];
                
                x = a;
                
                string val = to_string(x);
                int count = val.size();
                
                sum = 0;
                
                for(int i = 0; i < count; i += 1) {
                    
                    str[0] = val[i];
                    str[1] = '\0';
                    // Terminar em 0 para ser uma string válida a ser usada pela função atoi.
                    
                    num = atoi(str);
                    sum += pow(num,count);
                
                }
                
                if (sum == x) {
                list.push_back(x);
                
                }
            
            }
            
            if (!list.empty()){
                
                cout << "Números de Armstrong encontrados: \n";
                
                for (int i = 0; i < list.size(); i += 1) {
                
                cout<<list[i]<<endl;
                
                    
                }
            }   
            
            else {
                
                cout << "Nenhum número de Armstrong encontrado.\n";
            
            }
            
            cout << "Fim!\n";
        
        }
        
        else {
            
            cout << "Você digitou um valor não aceito pela função ou menor que o primeiro valor! Tente novamente.";
        }
    }   
    
    else {
        
        cout << "Você digitou um valor não aceito pela função! Tente novamente.";
    
    }
    return 0;
}