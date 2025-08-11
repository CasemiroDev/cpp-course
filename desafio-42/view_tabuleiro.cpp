#include <iostream>
#include <vector>
#include "view_tabuleiro.h"
#include <thread>
#include <chrono>

using namespace std;

void tabul(vector<vector<int>> x){
    cout<<"Resposta (desconsiderar)"<<endl;
    for (int l = 0;l < 5; l++){
        for(int c = 0; c<5; c++){
            cout<<"["<<x[l][c]<<"]";
            this_thread::sleep_for(chrono::milliseconds(300));
        }
        cout<<endl;
    }
    cout<<endl;
}