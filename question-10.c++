#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cout<<"Digite o valor do primeiro lado do triângulo: ";
    cin>>A;
    cout<<"Digite o valor do segundo lado do triângulo: ";
    cin>>B;
    cout<<"Digite o valor do terceiro lado do triângulo: ";
    cin>>C;
    
    int lad1 = A;
    int lad2 = B;
    int lad3 = C;
    
    if (lad1+lad2>lad3 && lad2+lad3>lad1 && lad3+lad1>lad2) {
        cout<<"Estes lados formam verdadeiramente um triângulo.\n";
        if (A == B && A == B && B == C){
            cout<<"Este é um triângulo equilátero";
        }
        else if (A != C && A != B && B != C){
            cout<<"Este é um triângulo escaleno";
        }
        else {
            cout<<"Este é um triângulo isóceles";
        }
    }

    return 0;
}