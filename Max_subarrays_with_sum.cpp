#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    // Taking input for the size of the array
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    int arr[n];

    // Taking input for array elements
    cout << "Enter the array elements" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Displaying the entered array
    cout << "Your Entered Array" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Taking input for the target sum
    cout << "Enter your target sum" << endl;
    int k;
    cin >> k;
    
    // HashMap to store prefix sum frequencies
    unordered_map<int, int> mpp;
    mpp[0] = 1; // To handle cases where subarray itself starts with sum=k
    
    int sum = 0;
    int count = 0;
    int rem = 0;
    
    // Traversing the array to count subarrays with sum = k
    for(int i = 0; i < n; i++)
    {
        sum += arr[i]; // Compute prefix sum
        rem = sum - k; // Find remaining sum needed
        count += mpp[rem]; // Check if this remaining sum exists in map
        mpp[sum]++; // Store prefix sum occurrence
    }
    
    // Output the count of subarrays with sum = k
    cout << "The total number of subarrays with sum = " << k << " are " << count;
    
    return 0;
}

/*
Dry Run Example:
-----------------
Input:
5
1 2 3 -1 4
4

Step-by-step Execution:
Index:  0   1   2   3   4
Array:  1   2   3  -1   4

Prefix Sum Calculation:
1 -> (1 - 4 = -3) Not Found
3 -> (3 - 4 = -1) Not Found
6 -> (6 - 4 = 2) Not Found
5 -> (5 - 4 = 1) Found in map (count = 1)
9 -> (9 - 4 = 5) Found in map (count = 2)

Output:
The total number of subarrays with sum = 4 are 2
*/
