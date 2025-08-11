#include "get_values.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;


void get_values(){
    fstream arquivo("temperatures.txt", ios::out);
    if (arquivo.is_open()){
        srand(time(NULL));
        for (int i = 0; i < 20; i++){
            arquivo << rand() % (51) + 40 << endl;
        }
    }
    arquivo.flush();
    arquivo.close();
}