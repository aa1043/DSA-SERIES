#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;  // Read array size
    
    cout << "Enter the array elements" << endl;
    vector<int> arr(n);  // Declare vector of size n
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  // Read array elements
    }

    cout << "The array elements are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // Print array elements
    }
    cout << endl;

    // Initialize variables
    int sum = arr[0];  // Stores the sum of the current increasing sequence
    int maxi = arr[0]; // Stores the maximum sum found

    // Iterate through the array starting from index 1
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])  // If increasing sequence continues
        {
            sum += arr[i];  // Add current element to sum
            maxi = max(maxi, sum);  // Update max sum if needed
        }
        else  // If the sequence breaks
        {
            sum = arr[i];  // Reset sum to current element
        }
    }

    cout << "The max ascending sum is " << maxi;
}


// OUTPUT

// Enter the size of the array
// Enter the array elements
// The array elements are
// 10 20 30 5 10 50 
// The max ascending sum is 65