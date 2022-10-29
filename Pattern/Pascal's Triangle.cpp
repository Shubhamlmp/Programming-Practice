#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    // Getting the number of rows.
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Pascal's Triangle of " << rows << " rows." << endl;

    // Main logic to print Pascal's triangle.
    for( int i = 0; i <  rows; i++){
        int spaces = rows - i;
        // Print spaces.
        for( int j = 0; j < spaces; j++){
            cout<<"  ";
        }

        int coefficient;
        // Print values.
        for( int j = 0; j <= i; j++){
            // Update coefficient's value
            if( j == 0 )
                coefficient = 1;
            else 
                coefficient = coefficient * (i - j + 1) / j;

            cout << coefficient << "   ";
        }

        cout << endl;
    }


    return 0;
}
