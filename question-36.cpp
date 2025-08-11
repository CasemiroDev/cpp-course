#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string archive;
    cout << "Escreva o nome do arquivo: ";
    getline(cin, archive);
    vector<string> content = {};
    
    fstream arquivo(archive, ios::app);
    
    if (arquivo.is_open()){
        string linha;
        for (int i = 0; i < 3; i++){
            string frase;
            cout << "Frase " << i+1 << ": ";
            cin >> frase;
            arquivo << frase << endl;
            
            content.push_back(frase);
        }
        cout << "Conteúdo do arquivo: \n";
        
        arquivo.close();
    }

    for (int i=0; i < 3; i++){
        cout<<content[i]<<endl;
    } 
        
    return 0;
    
}