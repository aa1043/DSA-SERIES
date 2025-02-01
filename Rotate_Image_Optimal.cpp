#include <iostream>
#include<algorithm>
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
    int arr[n][m];

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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(arr[i],arr[i]+m);
    }
    cout << "\nRotated Matrix (90 degrees clockwise):" << endl;
    for (int i = 0; i < m; i++) 
    { // Notice: row and column counts are swapped
        for (int j = 0; j < n; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}