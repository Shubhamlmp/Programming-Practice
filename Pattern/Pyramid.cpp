#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    // Getting the number of rows.
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Full Pyramid of " << rows << " using * -\n";

    // Main logic to print full pyramid. 
    for( int i = 0; i < rows; i++ ) {
        // Print spaces.
        int spaces = rows - i;

        for( int j = 0; j < spaces; j++){
            cout <<"  ";
        }
        
        // Print stars.
        for( int j = 0; j < 2 * i - 1; j++){
            cout <<"* ";
        }

        cout << endl;

    }
    
    return 0;
}
