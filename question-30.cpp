#include <iostream>

using namespace std;

int main()
{
    // Variables of the size
    int lines;
    int columns;
    
    // Variable for condition
    bool condition = true;
    
    // This while is used for case the user type 0 in the response
    while(condition == true) {
    
        // User type the size of the matrix
        cout << "Type the size of the matrix: " << endl;
        cout << "Type the amount of lines: ";
        cin >> lines;
        cout << "Type the amount of columns: ";
        cin >> columns;
        
        // The condition case, if the user type 0
        if (lines > 0 && columns > 0) {
            condition = false;
        }
    
    }
    
    int matrix[lines][columns];
    
    // variable the get the biggest number
    int max = 0;
    
    // the user type the values for the matrix
    for (int u = 0; u < lines; u++) {
        for (int a = 0; a < columns; a++) {
            cout << "Type the value for the " << u + 1 << "ª line, and " << a + 1 << "ª column: ";
            cin >> matrix[u][a];
        }
    }
    
    // get the biggest number
    for (int e = 0; e < lines; e++) {
        for (int i = 0; i < columns; i++) {
            if  (max < matrix[e][i]) {
                max = matrix[e][i];
            }
        }
    }
    
    cout << "The biggest number is: " << max;

    return 0;
}