#include <iostream>
using namespace std;

int main() 
{
    // Step 1: Taking user input for matrix dimensions
    cout << "Enter the number of rows" << endl;
    int n;
    cin >> n;

    cout << "Enter the number of columns" << endl;
    int m;
    cin >> m;

    // Step 2: Declaring the original matrix and rotated matrix
    int arr[n][m], rotated[m][n];

    // Step 3: Input elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
        }
    }

    // Step 4: Displaying the original matrix
    cout << "The Matrix is:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Rotating the matrix 90 degrees clockwise
    // Each element at (i, j) in the original matrix moves to (j, n-1-i) in the rotated matrix
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            rotated[j][n - 1 - i] = arr[i][j];
        }
    }

    // Step 6: Displaying the rotated matrix
    cout << "\nRotated Matrix (90 degrees clockwise):" << endl;
    for (int i = 0; i < m; i++) 
    { // Notice: row and column counts are swapped
        for (int j = 0; j < n; j++) 
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// OUTPUT

// Enter the number of rows
// Enter the number of columns
// Enter the elements of the matrix:
// The Matrix is:
// 1 2 3 
// 4 5 6 
// 7 8 9 

// Rotated Matrix (90 degrees clockwise):
// 7 4 1 
// 8 5 2 
// 9 6 3 

/*
    DRY RUN (Example Input & Step-by-Step Execution)

    User Input:
    ------------
    Enter the number of rows
    3
    Enter the number of columns
    3
    Enter the elements of the matrix:
    1 2 3
    4 5 6
    7 8 9

    Step 1: Original Matrix (arr)
    -------------------------------
    1  2  3
    4  5  6
    7  8  9

    Step 2: Rotation Rule Applied
    ------------------------------
    Each element arr[i][j] moves to rotated[j][n-1-i]

    (0,0) -> (0,2)   1 -> 7
    (0,1) -> (1,2)   2 -> 4
    (0,2) -> (2,2)   3 -> 1

    (1,0) -> (0,1)   4 -> 8
    (1,1) -> (1,1)   5 -> 5
    (1,2) -> (2,1)   6 -> 2

    (2,0) -> (0,0)   7 -> 9
    (2,1) -> (1,0)   8 -> 6
    (2,2) -> (2,0)   9 -> 3

    Step 3: Rotated Matrix Output
    ------------------------------
    7  4  1
    8  5  2
    9  6  3
*/
