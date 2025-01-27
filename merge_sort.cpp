#include <iostream>
using namespace std;

void merge(int arr[], int start, int end, int mid) 
{
    int i = start;     // Starting index of the left half
    int j = mid + 1;   // Starting index of the right half
    int temp[j-i-1];   // Temporary array to store sorted elements
    int k = 0;         // Index for the temp array

    // Merging two halves into temp
    while (i <= mid && j <= end) 
    {
        if (arr[i] <= arr[j]) 
        {
            temp[k] = arr[i];
            k++;
            i++;
        } 
        else 
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    // Copy remaining elements from the left half
    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }

    // Copy remaining elements from the right half
    while (j <= end) 
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    // Copy sorted elements back to the original array
    for (int a = start; a <= end; a++) 
    {
        arr[a] = temp[a-start]; // Map temp back to arr
    }
}

void mergesort(int arr[], int start, int end) 
{
    if (start >= end) 
    {
        return; // Base condition
    }
    int mid = (start + end) / 2;

    mergesort(arr, start, mid);    // Sorting the left half
    mergesort(arr, mid + 1, end); // Sorting the right half
    merge(arr, start, end, mid);  // Merging the two halves
}

int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The unsorted array is:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i]<<" ";
    }
    cout << "]" << endl;

    mergesort(arr, 0, n-1);

    cout << "The sorted array is:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i]<<" ";
    }
    cout << "]" << endl;

    return 0;
}



//  OUTPUT

// Enter the size of the array: Enter the array elements:
// The unsorted array is:
// [12 13 176 65 543 1 ]
// The sorted array is:
// [1 12 13 65 176 543 ]
