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
    
    if (x1 > x2) {
        cout<<"O número "<<x1<<" é maior que o "<<x2<<endl;
    }
    else if (x1 < x2) {
        cout<<"O número "<<x2<<" é maior que o "<<x1<<endl;
    }
    else {
        cout<<"Os dois números são iguais\n";
    }
    
    return 0;
}