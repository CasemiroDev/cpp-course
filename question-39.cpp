#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    string dname;
    
    cout << "Digite o nome do arquivo de origem: ";
    cin >> name;
    
    if (name == "alunos.txt"){
        fstream arquivo("alunos.txt", ios::in);
        if(arquivo.is_open()){
            string line;
            cout << "Digite o nome do arquivo de destino: ";
            cin >> dname;
            while (getline(arquivo, line)){
               fstream clue(dname, ios::app);
               clue << line << endl;
           }
            cout << "Arquivo copiado com sucesso!";
        }
    }
    else {
        cout << "O arquivo de origem não existe.";
    }
    return 0;
}