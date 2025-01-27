#include <iostream>
using namespace std;

void rrotate(int arr[], int n, int d) 
{
    d = d % n; // Ensure d is within bounds

    int temp[d];
    // Step 1: Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) 
    {
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements to the left
    for (int i = d; i < n; i++) 
    {
        arr[i - d] = arr[i];
    }

    // Step 3: Copy the elements from temp to the end of the array
    for (int i = 0; i < n; i++) 
    {
        arr[n - d + i] = temp[i];
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
