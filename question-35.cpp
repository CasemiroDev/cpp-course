#include <iostream>

using namespace std;

float converterParaFahrenheit(float c){
    float f;
    f = (c * 1.8) + 32;
    return f;
}

int main()
{
    int qtd;
    float x;
    float fah;
    
    cout << "Digite a quantidade de temperaturas em graus celsius a serem digitadas: ";
    cin >> qtd;
    
    for (int i = 0; i < qtd; i++){
        cout << "Digite a temperatura em celius "<< i + 1<<": ";
        cin >> x;
        fah = converterParaFahrenheit(x);
        cout << "A temperatura "<< x<<"°C em Fahrenheit é: "<<fah<<endl;
        
    }
    
    return 0;
}