#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, x3;
    cout<<"Digite o primeiro número: "<<endl;
    cin>>x1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>x2;
    cout<<"Digite o terceiro número: "<<endl;
    cin>>x3;
    
    if (x1 >= 0){
        double xp1 = pow(x1,2.0);
        cout<<"O valor do primeiro número ao quadrado é: "<<xp1<<endl;
    }
    else{
        double xp2 = pow(x1,3.0);
        cout<<"O valor do primeiro número ao cubo é: "<<xp2<<endl;
    }
    
    if (x2 < 100){
        cout<<"O segundo valor é menor que 100"<<endl;
    }
    if (x3 < x2) {
        double xd = x2 - x3;
        cout<<"A diferença do terceiro número com o segundo é: "<<xd<<endl;
    }
    else {
        cout<<"O terceiro número + 1 é: "<<x3 + 1<<endl;
    }
    return 0;
}