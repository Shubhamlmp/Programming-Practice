#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Pointer Variables declared for MAX and MIN
    int array[50], *maximum, *minimum, size, i;
    
    cout << "Enter the Number of Elements in Array\n";
    cin >> size;
    
    // Input for array elemets
    cout<<"Enter Array Elements\n";
    for ( i = 0 ; i < size ; i++ )
        cin >> array[i];
    
    // Minimum Pointer points in the range from First element of Array to Last
    // Returns the first one if more than one numbers are same
    minimum = std :: min_element(array, array + size);
    cout << "Minimum element in the array is " << *minimum << "\n";
    
    // Maximum Pointer points in the range from First element of Array to Last
    maximum = std :: max_element(array, array + size);
    cout << "Maximum element in the array is " << *maximum << "\n";

    return 0;
}
