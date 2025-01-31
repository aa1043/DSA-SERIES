// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include<iostream>
#include<vector> // Include the vector library for using vector<int>
using namespace std;

int main()
{
    // Prompt the user for the number of rows in the matrix
    cout << "Enter the number of rows" << endl;
    int n;
    cin >> n; // Taking input for the number of rows

    // Prompt the user for the number of columns in the matrix
    cout << "Enter the number of columns" << endl;
    int m;
    cin >> m; // Taking input for the number of columns

    // Declare a 2D array (matrix) with dimensions n x m
    int arr[n][m];

    // Taking input for the matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print the original matrix
    cout << "The Matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // Print each element of the matrix
        }
        cout << endl; // Move to the next row after printing each row
    }

    // Declare a variable to track the first column (col0) status
    int col0 = 1; // Initially, assume the first column is not zeroed

    // Iterate through the matrix to find zeros
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0) // If a zero is found
            {
                arr[i][0] = 0; // Mark the first element of the row as 0
                if (j != 0)
                {
                    arr[0][j] = 0; // Mark the first element of the column as 0
                }
                if (j == 0)
                {
                    col0 = 0; // If the zero is in the first column, set col0 to 0
                }
            }
        }
    }

    // Update the matrix based on the marks in the first row and column
    for (int i = 1; i < n; i++) // Start from the second row to avoid modifying the first row
    {
        for (int j = 1; j < m; j++) // Start from the second column to avoid modifying the first column
        {
            if (arr[i][j] != 0) // If the current element is not zero
            {
                // If the row or column has been marked for zeroing
                if (arr[0][j] == 0 || arr[i][0] == 0)
                {
                    arr[i][j] = 0; // Set the element to zero
                }
            }
        }
    }

    // Handle the first row if it was marked for zeroing
    if (arr[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            arr[0][j] = 0; // Set all elements in the first row to zero
        }
    }

    // Handle the first column if it was marked for zeroing
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][0] = 0; // Set all elements in the first column to zero
        }
    }

    // Print the updated matrix after modifying it
    cout << "Your Updated Array is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // Print each element of the updated matrix
        }
        cout << endl; // Move to the next row after printing each row
    }

}
