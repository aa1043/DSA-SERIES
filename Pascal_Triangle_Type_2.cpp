
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

#include <iostream>
#include <vector>

using namespace std;

// Function to generate a specific row of Pascal's Triangle
vector<int> generateRow(int row) {
    int ans = 1; // First element is always 1
    vector<int> rows;
    rows.emplace_back(1);
    
    // Compute elements using the binomial coefficient formula
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col); // Multiply by (row - col)
        ans = ans / col; // Divide by col to get next element
        rows.emplace_back(ans);
    }
    return rows;
}

// Function to generate Pascal's Triangle up to numRows
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> finalTriangle;
    
    // Generate each row and add it to the triangle
    for (int i = 1; i <= numRows; i++) {
        finalTriangle.emplace_back(generateRow(i));
    }
    return finalTriangle;
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;
    
    // Generate Pascal's Triangle
    vector<vector<int>> result = generate(numRows);
    
    // Display the triangle
    cout << "\nPascal's Triangle: \n";
    for (auto row : result) {
        cout << "[ ";
        for (auto num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}

// OUTPUT

// Enter the number of rows for Pascal's Triangle: 
// Pascal's Triangle: 
// [ 1 ]
// [ 1 1 ]
// [ 1 2 1 ]
// [ 1 3 3 1 ]
// [ 1 4 6 4 1 ]
// [ 1 5 10 10 5 1 ]
