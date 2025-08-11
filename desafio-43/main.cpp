#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

string verify(const vector<vector<string>> &x){
    
    for (int i = 0; i < 3 ; i++){
        if (x[i][0] != " " && x[i][0] == x[i][1] && x[i][1] == x[i][2])
            return "Vencedor: " + x[i][0];
    }
    for (int j = 0; j <3; j++){
        if (x[0][j] != " " && x[0][j] == x[1][j] && x[1][j] == x[2][j])
            return "Vencedor: " + x[0][j];
    }
    
    if (x[0][0] != " " && x[0][0] == x[1][1] && x[1][1] == x[2][2])
        return "Vencedor: "+ x[0][0];
    if (x[0][2] != " " && x[0][2] == x[1][1] && x[1][1] == x[2][0])
        return "Vencedor: "+ x[0][2];
    
    return "Empate!";
}

void mostrarTabuleiro(const vector<vector<string>>& x){
    cout<<"\nTabuleiro:\n";
    for (auto linha: x){
        for (auto celula: linha){
            cout<<"["<<celula<<"]";
        }
    cout<<endl;
    }
}

int main(){
    vector<vector<string>> tabuleiro(3, vector<string>(3," "));
    string jogadorX, jogador0;
    cout<<"Nome do Jogador X: ";
    getline(cin,jogadorX);
    cout<<"Nome do Jogador O: ";
    getline(cin, jogador0);
    
    int jogadas = 0;
    string atual = "X";
    
    while (jogadas < 9){
        mostrarTabuleiro(tabuleiro);
        int linha, coluna;
        cout << "\nVez do Jogador ("<<atual<<"). Informe linha e coluna (0-2): ";
        cin>>linha>>coluna;
        
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2){
            cout<<"Entrada fora dos limites. Tente novamente.\n";
            continue;
        }
        if (tabuleiro[linha][coluna] != " "){
            cout<< "Posição já ocupada. Tente novamente.\n";
            continue;
        }
        
        tabuleiro[linha][coluna] = atual;
        jogadas++;
        
        string resultado = verify(tabuleiro);
        if (resultado != "Empate!"){
            mostrarTabuleiro(tabuleiro);
            cout<<"\n"<<resultado<<"!\n";
            
            ofstream arquivo("resultado_tictactoe.txt");
            if (arquivo.is_open()){
                string nomeVencedor = (atual == "X") ? jogadorX : jogador0;
                arquivo << "Vencedor: " << nomeVencedor << " ("<< atual<<")";
                arquivo.close();
            }
            return 0;
        }
        atual = (atual == "X") ? "O" : "X";
    }
    
    mostrarTabuleiro(tabuleiro);
    cout<<"\nEmpate!\n";
    ofstream arquivo("resultado_tictactoe.txt");
    if (arquivo.is_open()){
    
        arquivo << "Empate!";
        arquivo.close();
    }
    
    return 0;
}