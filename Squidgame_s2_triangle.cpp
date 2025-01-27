#include <iostream>
#include <cmath>

using namespace std;

void sierpinskiTriangle(int n) {
    int rows = pow(2, n); // Number of rows (2^n)

    for (int i = 0; i < rows; i++) { 
        // Print spaces to center the stars
        for (int s = 0; s < rows - i - 1; s++) { 
            cout << " ";
        }

        for (int j = 0; j <= i; j++) { 
            // Use bitwise AND to decide whether to print '*'
            if ((i & j) == 0) { 
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl; // Move to the next line
    }
}

int main() {
    int depth;
    cout << "Enter the depth of the Sierpinski triangle: ";
    cin >> depth;
    sierpinskiTriangle(depth);
    return 0;
}