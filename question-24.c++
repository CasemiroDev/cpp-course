#include <iostream>

using namespace std;

int main()
{
    int n = 20/2;
    int x = 2;
    //Quantidade de números pares.
    
    int pares[n];
    
    for (int i=0;i<n;i++){
        pares[i] = x ;
        x += 2;
    }
    
    cout << "Os números pares são ";
    
    for (int a=0; a<n; a++){
        cout << pares[a] << " ";
    }
    
    

    return 0;
}