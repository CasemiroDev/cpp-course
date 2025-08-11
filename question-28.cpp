#include <iostream>

using namespace std;

int main() {
    
    //Fiz o código em um projeto e estou passando para este.
    int vector[10];
    int x;
    int cont = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite o "<< i + 1 << "º valor do vetor: " << endl;
        cin >> x;
        cont++;
        int cont2 = 0;
        
        for (int u = 0; u < cont; u++) {
            if (x == vector[u]) {
                cout << "Esse número está repetido tente novamente."<<endl;
                cont2++;
                cont--;
                i--;
                break;
            }
        }
        if (cont2 == 0) {
            vector[cont-1] = x;
        }
    }
    for (int a=0;a<10;a++) {
        cout<< vector[a]<<" ";
    }

    return 0;
}