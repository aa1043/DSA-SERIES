#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // Ask for the size of the array
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    
    // Ask for the elements of the array
    cout << "Enter the array elements" << endl;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Display the entered array
    cout << "Your Entered Array is " << endl;
    for(int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    
    // Initialize variables to store the real sum and the real square sum of the array
    long long realsum = 0;
    long long realsqr = 0;
    
    // Calculate the expected sum of first 'n' natural numbers
    long long sum = (long long)(n * (n + 1)) / 2;  // Sum of first n numbers = n*(n+1)/2
    
    // Calculate the expected sum of squares of first 'n' natural numbers
    long long sqr = (long long)(n * (n + 1) * (2 * n + 1)) / 6; // Sum of squares of first n numbers = n*(n+1)*(2n+1)/6
    
    // Loop through the array and calculate the real sum and real square sum
    for(int i = 0; i < n; i++) 
    {
        realsum = (long long)realsum + arr[i];  // Add each element to the sum
        realsqr = (long long)realsqr + (arr[i] * arr[i]);  // Add the square of each element to the sum of squares
    }
    
    // Equation to find the difference between the real sum and expected sum (S = X - Y)
    long long val1 = realsum - sum;
    
    // Equation to find the difference between the real sum of squares and the expected sum of squares (S2 = X^2 - Y^2)
    long long val2 = realsqr - sqr;
    
    // Equation to get the sum of the missing and repeating numbers (S2/S = X + Y)
    val2 = val2 / val1;  // This is the (X^2 - Y^2) / (X - Y) = (X + Y) formula
    
    // Now we know that val1 = X - Y and val2 = X + Y, so we can calculate X and Y
    long long repeat = (val1 + val2) / 2;  // The repeating number X = (X - Y + X + Y) / 2
    long long missing = repeat - val1;    // The missing number Y = X - (X - Y)

    // Output the result
    cout << endl << "The missing number is " << missing << endl;
    cout << "The repeating number is " << repeat;
}


// OUTPUT

// Enter the size of the array
// Enter the array elements
// Your Entered Array is 
// 1 2 3 4 5 5 7 
// The missing number is 6
// The repeating number is 5