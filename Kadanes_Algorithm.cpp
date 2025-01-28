
// KADANES ALGORITM SAYS THAT ADD THE ELEMENTS 
// BUT IF THE RESULTANT SUM IS POSITIVE THEN ONLY UPDATE THE SUM
// ELSE IF IT GETS NEGATIVE THEN UPDATE THE SUM TO 0



#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Step 1: Take the size of the array as input
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    // Step 2: Declare the array and take its elements as input
    int arr[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }

    // Step 3: Display the input array
    cout << "The array elements are:" << endl;
    for (int i = 0; i < n; i++)
     {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Initialize variables
    int maxi = INT_MIN; // To store the maximum subarray sum
    int sum = 0;        // To store the running sum of the current subarray

    // Step 5: Traverse the array
    for (int i = 0; i < n; i++)
     {
        // Add the current element to the running sum
        sum = sum + arr[i];

        // Update the maximum subarray sum if the current sum is greater than the previous maximum
        maxi = max(sum, maxi);

        // If the running sum becomes negative, reset it to 0
        if (sum < 0) 
        {
            sum = 0;
        }
    }

    // Step 6: Print the maximum subarray sum
    cout << "Maximum subarray sum is: " << maxi << endl;

    return 0;
}
