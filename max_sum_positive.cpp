#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter your Desired Sum: " << endl;
    int k;
    cin >> k;

    cout << "Your Original Array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int i = 0, j = 0, sum = 0, maxlen = 0;

    // Sliding window technique
    while (j < n) 
    {
        sum += arr[j]; // Expand the window by adding the current element

        // Shrink the window if the sum exceeds k
        while (sum > k && i <= j) 
        {
            sum -= arr[i]; // Remove the left element from the sum
            i++; // Move the left pointer to the right
        }

        // If the sum matches the desired sum, calculate the subarray length
        if (sum == k) 
        {
            maxlen = max(maxlen, j - i + 1); // Update maxlen with the length of the subarray
        }

        j++; // Move the right pointer to the right
    }

    cout << "The maximum length of the subarray with sum = " << k << " is: " << maxlen << endl;

    return 0;
}


// OUTPUT


// Enter the size of the array: 
// 5
// Enter the array elements: 
// 1 2 3 4 5
// Enter your Desired Sum:
// 9
// Your Original Array is: 1 2 3 4 5 
// The maximum length of the subarray with sum = 9 is: 2
