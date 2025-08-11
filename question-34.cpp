#include <iostream>

using namespace std;

bool ehPrimo(int number){
    
    int counter = 0;
    
    for (int a = 1; a <= number; a++){
        if (number % a == 0){
            counter++;
        }
    }
    
    if (counter == 2){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int qtd;
    bool verify;
    
    cout << "Digite quantos números deseja verificar: ";
    cin >> qtd;
    
    for (int i = 0; i < qtd; i++){
        int x;
        cout << "Número " << i+1 <<": ";
        cin >> x;
        verify = ehPrimo(x);
        
        if (verify == true){
            cout << "O número " << x << " é primo" << endl;
        }
        else {
            cout << "O número " << x << " não é primo" << endl;
        }
    }
    return 0;
}