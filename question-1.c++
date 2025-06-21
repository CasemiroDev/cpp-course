#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Digite um número:";
    cin>>x;
    if (x>20) {
        cout<<"Este número é maior que 20."<<endl;
    }
    else {
        cout<<"Este número é igual ou menor que 20.";
    }
    return 0;
}