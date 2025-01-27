#include <iostream>
using namespace std;

void rrotate(int arr[], int n, int d) 
{
    
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
