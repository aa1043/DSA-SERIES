// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include<iostream>
#include<vector> // Include the vector library for using vector<int>
using namespace std;

int main()
{
    cout<<"Enter the number of rows"<<endl;
    int n;
    cin>>n; // Taking input for the number of rows

    cout<<"Enter the number number of columns"<<endl;
    int m;
    cin>>m; // Taking input for the number of columns

    int arr[n][m]; // Declaring a 2D array of size n x m

    // Taking input for the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The Matrix is:"<<endl;
    // Printing the original matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Creating row and column marker vectors initialized to 0
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    // Identifying which rows and columns contain at least one zero
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0) // If an element is zero
            {
                row[i]=1; // Mark the entire row to be set to zero
                col[j]=1; // Mark the entire column to be set to zero
            }
        }
    }

    // Updating the matrix based on row and column markers
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i]==1||col[j]==1) // If row or column is marked, set the element to zero
            {
                arr[i][j]=0;
            }
        }
    }

    cout<<"Your Updated Array is"<<endl;
    // Printing the updated matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


// OUTPUT

// Enter the number of rows
// Enter the number number of columns
// The Matrix is:
// 1 1 1 
// 1 0 1 
// 1 1 1 
// Your Updated Array is
// 1 0 1 
// 0 0 0 
// 1 0 1 



/* 
    Dry Run for the given program:
    
    Input:
    n = 3, m = 3
    Matrix:
    1  2  3
    4  0  6
    7  8  9

    Step 1: Identify rows and columns containing zero.
    row[] =  { 0, 1, 0 }
    col[] =  { 0, 1, 0 }

    Step 2: Update the matrix using row[] and col[].
    
    Output (Updated Matrix):
    1  0  3
    0  0  0
    7  0  9
*/

