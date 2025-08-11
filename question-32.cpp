#include <iostream>

using namespace std;

int main()
{
    int lines;
    int columns;
    
    bool condition = false;
    
    while (condition == false) {
        cout<<"Type the size of lines in the matrix: ";
        cin>> lines;
        cout<<"Type the size of columns in the matrix: ";
        cin>> columns;
        
        if (lines > 0 && lines <=5 && columns > 0 && columns <=5){
            condition = true;
        }
    }
    
    int matrix[lines][columns];
    
    for (int a = 0;  a < lines; a++) {
        for (int e = 0; e < columns; e++) {
            cout << "Type the value for the " << a + 1 << "ª line and the "<< e + 1<<"ª column: ";
            cin >> matrix[a][e];
        }
    }
    
    int counter =0;
    
    for (int i = 0; i < lines; i++){
        for (int o = 0; o < columns; o++) {
            cout<<"["<<matrix[i][o]<<"] ";
            
            if (matrix[i][o] > 0){
                counter++;
            }
        }
        cout<<endl;
    }
    
    cout<<"The amount of positive numbers in the matrix is "<<counter;

    return 0;
}