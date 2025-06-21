#include <iostream>

using namespace std;

int main()
{
    int choose;
        
    cout<<"Digite o número do mês da sua escolha:\n[1] - janeiro\n[2] - fevereiro\n[3] - março\n[4] - abril\n[5] - maio\n[6] - junho\n[7] - julho\n[8] - agosto\n[9] - setembro\n[10] - outubro\n[11] - novembro\n[12] - dezembro\n";
    cin>>choose;
    
    switch (choose) {
        
        case 1:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 2:
            cout<<"O mês escolhido tem 28 dias";
            break;
        case 3:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 4:
            cout<<"O mês escolhido tem 30 dias";
            break;
        case 5:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 6:
            cout<<"O mês escolhido tem 30 dias";
            break;
        case 7:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 8:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 9:
            cout<<"O mês escolhido tem 30 dias";
            break;
        case 10:
            cout<<"O mês escolhido tem 31 dias";
            break;
        case 11:
            cout<<"O mês escolhido tem 30 dias";
            break;
        case 12:
            cout<<"O mês escolhido tem 31 dias";
            break;
        default:
            cout<<"O que você digitou não está na lista de escolha.";
    }
    

    return 0;
}