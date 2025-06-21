#include <iostream>

using namespace std;

int main()
{
    int x1;
    int x2;
    cout<<"Digite o primeiro número:";
    cin>>x1;
    cout<<"Digite o segundo número:";
    cin>>x2;
    
    if (x1 == x2){
        cout<<"Estes dois números são iguais";
    }
    else {
        cout<<"Estes dois números não são iguais";
    }

    return 0;
}