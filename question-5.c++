#include <iostream>

using namespace std;

int main()
{
    float x1;
    cout<<"Quantas maçãs você comprou? ";
    cin>>x1;
    
    if (x1 < 12){
        cout<<"o preço da compra foi: "<<x1 * 0.6<<endl;
    }
    else {
        cout<<"O preço da compra foi: "<<x1 * 0.55<<endl;
    }

    return 0;
}