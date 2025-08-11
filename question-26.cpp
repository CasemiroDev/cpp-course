#include <iostream>

using namespace std;

int main()
{
    
    // Como pedido no código preenchi o vetor com valores inteiros.
    // Removi a acentuação fora os comentários para evitar a não interpretação pelo terminal.
    // Se desejar testar outros valores, comentar o primeiro "for" e definir os 10 números de sua escolha
    
    cout << "Foi definido um vetor contendo valores no intervalo [0,9]" << endl;
    
    int vector[10];
    int grl1 = 0;
    int grl2 = 0;
    
    for (int i = 0; i < 10; i++) {
        vector[i] = i;
    }
    
    cout << "Os numeros impares sao: " << endl;
    
    for (int u = 0; u < 10; u++) {
        if (vector[u] % 2 != 0) {
            cout << vector[u] << " ";
        }
        else {
            grl1++;
        }
    }
    if (grl1 == 10){
        cout << "Nao ha numeros impares";
    }
    
    
    cout << endl << "Os numeros primos sao: " << endl;
    
    for (int a = 0; a < 10; a++) {
        int val = vector[a];
        int ant[val];
        int counter = 0;
        for (int e = 1; e <= val; e++) {
            if (val % e == 0) {
                counter++;
            }
        }
        if (counter == 2) {
            cout << val << " ";
        }
        else{
            grl2++;
        }
    }
    if (grl2 == 10) {
        cout<<"Nao ha numeros primos";
    }
    
    

    return 0;
}