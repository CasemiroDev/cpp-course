#include <iostream>

using namespace std;

int main()
{
    int vector[10];
    int vet = 1;
    int val;
    int maior;
    int menor;
    
    
    for (int i=0;i < 10;i++){
        cout<<"Digite o "<<vet<<"ª valor do vetor: ";
        cin >> val;
        vet++;
        vector[i] = val;
    }
    
    maior = vector[0];
    
    for (int a = 0; a < 10; a++){
        if (vector[a] > maior){
            maior = vector[a];
        }
    }
    
    menor = vector[0];
    
    for (int u = 0; u <10; u++){
        if (vector[u]< menor){
            menor = vector[u];
        }
    }
    
    int diferenca = maior - menor;
    
    cout<<"O maior valor do intervalo é: "<<maior<<endl;
    cout<<"O menor valor do intervalo é: "<<menor<<endl;
    cout<<"A diferença entre maior e o menor valor do intervalo é: "<<diferenca<<endl;
    
    

    return 0;
}