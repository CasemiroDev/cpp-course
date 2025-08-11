#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include "machine.h"

using namespace std;

void machines(){
    int total;
    cout << "Digite a quantidade de máquinas a serem avaliadas: ";
    cin>>total;
    
    fstream arquivo("inspecao.txt", ios::out);
    if (arquivo.is_open()){
        srand(time(NULL));
        for (int i=0; i<total; i++){
            int num = rand() % 2 ;
            arquivo << num << endl;
        }
        arquivo.flush();
        arquivo.close();
    }
    else{
        cout <<"Erro interno ao abrir o arquivo"<<endl;
    }
}