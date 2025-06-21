#include <iostream>

using namespace std;

int main()
{
    int code;
    int qtd;
    float price;
    cout<<"Qual o código do produto que você comprou?"<<endl;
    cin>>code;
    
    switch (code){
        
        case 1001:
        cout<<"Quantos unidades você comprou deste produto?"<<endl;
        cin>>qtd;
        price = qtd * 5.32;
        cout<<"O valor total gasto com esse produto foi:"<<price<<endl;
        break;
        
        case 1324:
        cout<<"Quantos unidades você comprou deste produto?"<<endl;
        cin>>qtd;
        price = qtd * 6.45;
        cout<<"O valor total gasto com esse produto foi:"<<price<<endl;
        break;
        
        case 6548:
        cout<<"Quantos unidades você comprou deste produto?"<<endl;
        cin>>qtd;
        price = qtd * 2.37;
        cout<<"O valor total gasto com esse produto foi:"<<price<<endl;
        break;
        
        case 987:
        cout<<"Quantos unidades você comprou deste produto?"<<endl;
        cin>>qtd;
        price = qtd * 5.32;
        cout<<"O valor total gasto com esse produto foi:"<<price<<endl;
        break;
        
        case 7623:
        cout<<"Quantos unidades você comprou deste produto?"<<endl;
        cin>>qtd;
        price = qtd * 6.45;
        cout<<"O valor total gasto com esse produto foi: R$ "<<price<<endl;
        break;
        
        default:
        cout<<"O código apresentado não está na lista";
    }
        
    

    return 0;
}