#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 20 / 2;
    int u = 19 - 9;
    
    int sum1;
    int sum2;
    
    int vector1[a];
    int vector2[u];
    int vector3[10];
    
    for (int i=0;i<a;i++){
        vector1[i] = pow(2 * (i + 1),2);
    }
    
    for (int e=0;e<u;e++){
        vector2[e] = 10 + e;
    }
    
    for (int g=0;g<10;g++){
        sum1 += vector1[g];
    }
    
    for (int h=0;h<10;h++){
        sum2 += vector2[h];
    }
    
    for (int y=0;y<10;y++){
        vector3[y] = vector1[y] + vector2[y];
    }
    
    cout << "A soma do primeiro vetor é: "<<sum1<<endl;
    cout << "A soma do segundo vetor é: "<<sum2<<endl;
    cout << "A soma da soma dos dois vetores é: "<< sum1 + sum2<<endl;

    cout << "A soma vetorial (em física) é um vetor = ";
    for (int t=0; t<10; t++){
        cout<<vector3[t]<<" "; 
    }

    return 0;
}