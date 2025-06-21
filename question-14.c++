#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> par;
    vector<int> impar;
    
    int x,y;
    int counter = 1;
    
    cout<<"Considere que você irá digitar valores para x, enquanto x <= y\n";
    cout<<"Digite o valor para y\n";
    cin>>y;
    
    do{
        cout<<"Digite o "<<counter<<"ª valor para x: \n";
        cin>>x;
        
        counter += 1;
        
        if (x <= y){
            if (x % 2 == 0){
                par.push_back(x);
            }
            else{
                impar.push_back(x);
            }
            
        }
        else{
            cout<<"O valor digitado para x é maior do que o valor digitado para y\n";
        }
    }while(x <= y);
    
    cout<<"Para os números pares temos: ";
    for (int elemento : par) {
        cout << elemento << " ";
    }
    
    cout<<"Para os números ímpares temos: ";
    for (int elemento2 : impar) {
        cout << elemento2 << " ";
    }

    return 0;
}