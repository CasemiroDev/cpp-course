#include <iostream>
#include "get_values.h"
#include "sensor_values.h"
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <thread>
#include <chrono>

using namespace std;

int main()
{   
    cout << "Avaliação de Motor Elétrico Classe A de Centrifugadeira"<<endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    
    get_values();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    fstream arquivo("temperatures.txt", ios::in);
    if (arquivo.is_open()){
        for (int i = 0; i < 20;i++){
            string line;
            while (getline(arquivo, line)){
                int x;
                x = stoi(line);
                function_sensor(x);
            }
            
        }
        arquivo.close();
    }
    else {
        cout << "O arquivo com as temperaturas não foi gerado!";
    }

    return 0;
}