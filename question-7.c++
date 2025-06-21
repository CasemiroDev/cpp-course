#include <iostream>

using namespace std;

int main() {
    
    float nx1, nx2, ny1, ny2;
    
    cout<<"Olá aluno! Digite digite sua primeira nota do N1: \n";
    cin>> nx1;
    
    cout<<"Digite sua segunda nota do N1: \n";
    cin>>nx2;
    
    cout<<"Digite sua primeira nota do N2: \n";
    cin>>ny1;
    
    cout<<"digite sua segunda nota do N2: \n";
    cin>>ny2;
    
    float med1, med2;
    med1 = (nx1 + nx2)/2;
    med2 = (ny1 + ny2)/2;
    
    cout<<"As médias aritméticas foram respectivamente: "<<med1<<", "<<med2<<endl;
    
    float med3 = ((2*med1)+(3*med2))/5;
    
    cout<<"Sua média ponderada foi: "<<med3<<endl;
    
    if (med3 < 7.0) {
        cout<<"Você foi reprovado!"<<endl;
    }
    else {
        cout<<"Você foi aprovado!"<<endl;
        if (med3 == 7.0) {
            cout<<"Você foi aprovado com a nota na média!"<<endl;
        }
        if (med3 == 10.0) {
            cout<<"Você foi aprovado com a nota máxima!"<<endl;
        }
    }
    
    return 0;
}