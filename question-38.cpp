#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    string name;
    int tot;
    
    cout << "Digite o nome do arquivo: ";
    cin >> name;
    
    if (name == "alunos.txt"){
        fstream arquivo("alunos.txt", ios::app);
        if (arquivo.is_open()){
            cout<<"Quantos alunos deseja registrar? ";
            cin >> tot;
            
            for (int i = 0;  i < tot; i++){
                string aname;
                cout << "Aluno "<< i+1 <<": ";
                cin >> aname;
                arquivo << aname << endl;
            }
        }
    }
    else{
        cout << "O arquivo digitado não existe";
    }
    
    return 0;
}