#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to find the index of the smallest element (i.e., the number of rotations)
int findKRotation(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the array is already sorted, return the first index (0 rotations)
        if (arr[low] <= arr[high]) return low;

        // Check if mid is the pivot (smallest element in rotated sorted array)
        if (mid > 0 && arr[mid] < arr[mid - 1]) return mid;

        // If left half is sorted, move to the right half
        if (arr[low] <= arr[mid]) {
            low = mid + 1;
        } else {  
            // Otherwise, move to the left half
            high = mid - 1;
        }
    }

    return 0;  // If not found, return 0 (no rotation case)
}

int main() {
    // Example test case
    int n;
    cout << "Enter the number of elements: "<<endl;
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Calling the function
    int rotations = findKRotation(arr);

    // Output the number of rotations
    cout << "The array is rotated " << rotations << " times." << endl;

    return 0;
}
