#include <iostream>

using namespace std;

int main()
{
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    int x;
    int valid = 0;
    int posi;
    
    cout << "Ei, digita um número aí: " << endl;
    cin >> x;
    
    cout << "Valores do Vetor: ";
    for (int i = 0; i < 10; i++) {
        int cont = vetor[i];
        if (cont == x) {
            posi = i+1;
            valid++;
        }
        cout << i + 1 << "ª posição do vetor: " << cont << endl;
        
    }
    if (valid != 0) {
        cout << "O número digitado está na " << posi <<"ª posição"<<endl;
    }
    if (valid == 0) {
        cout << "O número digitado não existe no vetor!";
    }

    return 0;
}