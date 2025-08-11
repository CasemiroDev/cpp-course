#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "tabuleiro.h"

using namespace std;

vector<vector<int>> inicializarTabuleiro(){
    vector<vector<int>> tabuleiro(5,vector<int>(5));
    
    srand(time(NULL));
    int column = rand() % 5;
    int line = rand() % 5;
    
    tabuleiro[line][column] = 1;
    
    return tabuleiro;
}