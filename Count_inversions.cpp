#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves and count inversions
int merge(vector<int> &arr, int low, int mid, int high) {
    int count = 0;  // Stores the number of inversions
    int i = low;    // Pointer for left half
    int j = mid + 1; // Pointer for right half
    vector<int> temp; // Temporary array to store merged sorted elements

    // Merging two halves while counting inversions
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            temp.emplace_back(arr[i]);
            i++;
        } else {
            temp.emplace_back(arr[j]);
            j++;
            count += (mid - i + 1);  // Count inversions: elements remaining in left half are greater
        }
    }

    // Copy any remaining elements from the left half
    while (i <= mid) {
        temp.emplace_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from the right half
    while (j <= high) {
        temp.emplace_back(arr[j]);
        j++;
    }

    // Copy sorted elements back to the original array
    for (int a = low; a <= high; a++) {
        arr[a] = temp[a - low];
    }

    return count;  // Return the total inversion count from this merge step
}

// Function to implement Merge Sort and count inversions recursively
int mergesort(vector<int> &arr, int low, int high) {
    int count = 0;  // Stores the total inversion count
    if (low >= high) {
        return count;  // Base case: if the array has one or zero elements, return 0
    }
    
    int mid = (low + high) / 2;  // Find the middle index
    
    // Recursively sort the left half and count inversions
    count += mergesort(arr, low, mid);
    
    // Recursively sort the right half and count inversions
    count += mergesort(arr, mid + 1, high);
    
    // Merge both halves and count split inversions
    count += merge(arr, low, mid, high);
    
    return count;  // Return total inversions
}

// Main function
int main() {
    // Taking user input for array size
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    // Taking user input for array elements
    cout << "Enter the array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "\nYour original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Count the number of inversions using merge sort
    int count = mergesort(arr, 0, n - 1);

    // Display the number of inversions
    cout << "\nThe total number of inversions are: " << count;

    // Display the sorted array
    cout << "\nYour Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


//OUTPUT

// Enter the size of the array
// Enter the array elements

// Your original array
// 2 4 1 3 5 
// The total number of inversions are 
// 3
// Your Sorted array is
// 1 2 3 4 5 
