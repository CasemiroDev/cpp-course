#include <iostream>
#include <string>

using namespace std;

float nota1, nota2, nota3;
string nome;

int main()
{
    cout << "Digite seu primeiro nome:" << endl;
    cin >> nome;
    cout << "Digite sua primeira nota:" << endl;
    cin >> nota1;
    cout << "Digite sua segunda nota: " << endl;
    cin >> nota2;
    cout << "Digite sua terceira nota: " << endl;
    cin >> nota3;
    
    float media = (nota1*2 + nota2*3 + nota3*5) / 10;
 
    cout << "Olá" << nome << "Suas três primeiras notas foram "<< nota1 << " " << nota2 << " " << nota3 << " ." << "Sua média da primeira nota com peso 2, da segunda nota com peso 3 e da terceira nota com peso 5 é " << media << endl;

return 0; 
}