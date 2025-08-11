#include <iostream>

using namespace std;


int function(int base,int altura){
    
    int area;
    
    if (base > 0){
        if (altura > 0){
            area = base * altura;
            return area;
        }
        else{
            return 0;
        }
    }
    else {
        return 0;
    }
}
    
int main(){
    for (int i=0;i < 2; i++){
        int base,altura;
        cout << "Digite o valor da base: ";
        cin >> base;
        cout << "Digite o valor da altura: ";
        cin >> altura;
        int area = function(base,altura);
        if (area != 0){
        cout << "A área do " << i + 1 << "ª retângulo é: " << area << endl;
        }
        else{
            cout << "O retângulo descrito não existe, pois tem área 0." << endl;
        }
    }
    return 0;
}