#include <iostream>
using namespace std;

void rrotate(int arr[], int n, int d) 
{
    if (d < 0) // If rotations are negative, return without doing anything
    {
        return;
    }

    d = d % n; // Normalize rotations if d > n (since rotating n times brings the array back to its original state)

    int temp[d]; // Step 1: Create a temporary array to store the last 'd' elements of the array

    for (int i = 0; i < d; i++) 
    {
        temp[i] = arr[n - d + i]; // Copy the last 'd' elements into the temporary array
    }

    // Step 2: Shift the remaining elements in the array to the right
    for (int i = n - d - 1; i >= 0; i--) 
    {
        arr[i + d] = arr[i]; // Move each element at index 'i' to index 'i + d'
    }

    // Step 3: Place the elements from the temporary array into the beginning of the original array
    for (int i = 0; i < d; i++) 
    {
        arr[i] = temp[i]; // Copy the elements from 'temp' back to the start of the array
    }
}

int main()
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of rotations: ";
    int d;
    cin >> d;

    cout << "Your Original Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    rrotate(arr, n, d);
    cout << endl;

    cout << "Your Rotated Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
