
// TO FIND AN ELEMENT PRESENT IN THAT ROW AND COLUMN

#include<iostream> // Include input-output stream library
using namespace std;

int main()
{
    cout << "Enter the row number" << endl;
    int n; // Variable to store the row number (1-based index)
    cin >> n; // Take user input for row number

    cout << "Enter the column number" << endl;
    int r; // Variable to store the column number (1-based index)
    cin >> r; // Take user input for column number

    // Convert 1-based indices to 0-based indices for calculation
    int row = n - 1; // Convert row number to 0-based index
    int col = r - 1; // Convert column number to 0-based index

    int res = 1; // Variable to store the result of nCr (Binomial Coefficient)

    // Loop to calculate nCr using the formula:
    // nCr = (n! / (r! * (n - r)!))
    for(int i = 0; i < col; i++)
    {
        res = res * (row - i); // Multiply by (n - i)
        res = res / (i + 1); // Divide by (i + 1) to get nCr without factorials
    }

    // Output the result
    cout << "The element present in row number " << n << " and column number " << r << " is " << res;
}


// OUTPUT 
// Enter the row number
// Enter the column number
// The element present in row number 5 and column number 3 is 6