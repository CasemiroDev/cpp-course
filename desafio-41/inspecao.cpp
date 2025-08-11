#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "inspecao.h"

using namespace std;

void inspec(){
    fstream arquivo("inspecao.txt", ios::in);
    if (arquivo.is_open()){
        int counter = 0;
        int hard_counter = 0;
        string line;
        while (getline(arquivo, line)){
            counter++;
            if (stoi(line) == 0 ){
                hard_counter++;
                cout << "Máquina "<< counter<<": Falha! Necessita de Manutenção"<<endl;
            }
            else{
                cout<< "Máquina "<< counter<<": OK."<<endl;
            }
        }
        arquivo.flush();
        arquivo.close();
        cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
        cout<<"Total de máquinas inspecionadas: "<<counter<<endl;
        cout<<"Total de máquinas que precisam de manutenção: "<<hard_counter<<endl;
    }
    else{
        cout<<"Erro interno"<<endl;
    }
}