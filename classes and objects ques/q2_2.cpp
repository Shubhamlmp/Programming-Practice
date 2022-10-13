// Create a class called 'Matrix' containing constructor that initializes the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
// 1 - number of rows of matrix
// 2 - number of columns of matrix
// 3 - elements of matrix (You can use 2D vector)
// The Matrix class has functions for each of the following:
// 1 - get the number of rows
// 2 - get the number of columns
// 3 - set the elements of the matrix at a given position (i,j)
// 4 - adding two matrices.
// 5 - multiplying the two matrices
// You can assume that the dimensions are correct for the multiplication and addition.

#include <iostream>
#include <string>
using namespace std;
class Matrix
{
public:
    int rows;
    int columns;
    Matrix(int n, int m)
    {
        rows = n;
        columns = m;
    }

    int getRows()
    {
        return rows;
    }

    int getColumns()
    {
        return columns;
    }

    int setElements(Matrix m1,Matrix m2)
    {   
        int n;
        int m;
        cout << "Enter rows: ";
        cin >> n;
        cout << "Enter columns: ";
        cin >> m;
        int arr[n][m];
        cout << "Enter elements: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "Elements are: ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << endl;
            }
        }
    }

    int add(Matrix m1,Matrix m2)
    {
        int n;
        int m;
        cout << "Enter rows: ";
        cin >> n;
        cout << "Enter columns: ";
        cin >> m;
        int arr1[n][m];
        int arr2[n][m];

        cout << "Enter the elements of matrix 1: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter the elements of matrix  2: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr2[i][j];
            }
        }
        cout << "Sum of 2 arrays is: \n";
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = arr1[i][j] + arr2[i][j];
            }
        }
    }

    int product(Matrix m1,Matrix m2)
    {
        int n;
        int m;
        cout << "Enter rows: ";
        cin >> n;
        cout << "Enter columns: ";
        cin >> m;
        int arr1[n][m];
        int arr2[n][m];

        cout << "Enter the elements of matrix 1: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter the elements of matrix  2: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr2[i][j];
            }
        }
        cout << "Product of 2 arrays is: \n";
        int product = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                product = arr1[i][j] * arr2[i][j];
            }
        }
    }
};
int main()
{
    Matrix m1(2, 4),m2(3,2);
    cout << m1.getRows() << endl;
    cout << m1.getColumns() << endl;
    cout << m1.add(m1,m2) << endl;
    cout << m1.product(m1, m2) << endl;

    return 0;
}