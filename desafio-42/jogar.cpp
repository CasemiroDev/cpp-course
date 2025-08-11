#include <iostream>
#include <fstream>
#include "tabuleiro.h"
#include "jogar.h"
#include "view_tabuleiro.h"

using namespace std;

void jogarBatalhaNaval(){
    cout<<"Bem-vindo(a) ao jogo simplificado batalha naval, nosso tabuleiro tem 5 x 5 espaços possíveis para o navio"<<endl;
    cout<<"Você tem 5 tentativas, econtre-o e vença o jogo!"<<endl;
    vector<vector<int>> tabuleiro = inicializarTabuleiro();
    int victory=0;
    tabul(tabuleiro);
    for (int u = 0; u<5; u++){
        int line=0;
        int column=0;
        cout<<"Tentativa número: "<<u+1<<endl;
        cout<<"linha: ";
        cin >> line;
        cout<< "coluna: ";
        cin >> column;
        if (line > 0 && line <6 && column >0 && column <6){
            if (tabuleiro[line-1][column-1] == 0){
                cout<<"O navio não está nessa posição tente novamente."<<endl;
            }
            else {
                cout<<"Parabéns você encontrou o navio, vitória!"<<endl;
                victory++;
                break;
            }
        }
        else{
            cout << "Você gastou uma tentativa digitando um valor incorreto para a posição!"<<endl;
        }
    }
    cout<< "Suas tentativas acabaram!"<<endl;
    fstream arquivo("historico.txt", ios::app);
    if( arquivo.is_open()){
        if (victory == 0){
            arquivo << "derrota..." << endl;
        }
        else{
            arquivo << "vitória!" << endl;
        }
        arquivo.close();
    }
    else{
        cout<<"O arquivo \"historico.txt\" não existe!"<<endl;
    }
    
}