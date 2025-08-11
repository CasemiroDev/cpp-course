#include <iostream>
#include <fstream>

using namespace std;

int main()
{   
    int counter;
    string name;
    
    cout << "Digite o nome do arquivo: ";
    cin >> name;
    
    if (name == "linhas.txt"){
        ifstream arquivo("linhas.txt");
        if (arquivo.is_open()) {
            string linha;
            while (getline(arquivo,linha)){
                counter++;
            }
        }
        cout << "O arquivo \'linhas.txt\' contém "<<counter<<" linhas.";
    }
    else{
        cout << "O arquivo não existe.";
    }
    
    
    return 0;
}