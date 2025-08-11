#include "sensor_values.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;

int function_sensor(int x){
    if (x < 60){
        cout << "Temperatura: "<< x <<"ºC | A temperatura está normal."<<endl;
        std::this_thread::sleep_for(chrono::seconds(2));
    }
    else if (x >= 60 && x <= 80){
        cout << "Temperatura: "<< x <<"ºC | Alerta: Motor aquecendo." << endl;
        std::this_thread::sleep_for(chrono::seconds(2));
    }
    else {
        cout << "Temperatura: "<< x << "ºC | Perigo! Superaquecimento!" << endl;
        std::this_thread::sleep_for(chrono::seconds(2));
    }
    return 0;
}