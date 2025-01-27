

//                BUBBLE SORT


#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The unsorted array is"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) // BECAUSE N-1 PASSES ARE REQUIRED FOR N ELEMENTS
    { 
        int didswap=0;
        // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) 
        { 
            // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) 
            {
                // Swap adjacent elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap++;
            }
        }
        if(didswap==0)// that means the array has been sorted no more passes required
        {
            break;
        }
        cout<<didswap<<endl;//  you can check the number of swaps
    }
    cout<<"The sorted array using Bubble Sort is :"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}


// OUTPUT

// Enter the size of the array
// Enter the array elements
// The unsorted array is
// [ 2 5 9 1 5 6 ]
// The sorted array using Bubble Sort is :
// [ 1 2 5 5 6 9 ]



// Dry Run with a General n (Array Size):
// Let’s assume an array of size n 

// int arr[6] = {5, 2, 9, 1, 5, 6};
// First Pass (i = 0):
// The outer loop runs for i = 0, and the inner loop compares adjacent elements from the start of the array to n - i - 1 (i.e., n - 1).
// For this pass, j will go from 0 to n - 2 (i.e., 0 to 4).
// Here’s how the comparisons and swaps will happen:

// Compare arr[0] (5) and arr[1] (2): Since 5 > 2, we swap them.


// arr = {2, 5, 9, 1, 5, 6}
// Compare arr[1] (5) and arr[2] (9): No swap needed (5 < 9).


// arr = {2, 5, 9, 1, 5, 6}
// Compare arr[2] (9) and arr[3] (1): Since 9 > 1, we swap them.


// arr = {2, 5, 1, 9, 5, 6}
// Compare arr[3] (9) and arr[4] (5): Since 9 > 5, we swap them.


// arr = {2, 5, 1, 5, 9, 6}
// Compare arr[4] (9) and arr[5] (6): Since 9 > 6, we swap them.


// arr = {2, 5, 1, 5, 6, 9}
// After the first pass, the largest element 9 has bubbled to the end of the array.

// Second Pass (i = 1):
// The outer loop runs for i = 1. Now, the inner loop compares the first n - i - 1 (i.e., n - 2 = 4) elements.
// Compare arr[0] (2) and arr[1] (5): No swap needed (2 < 5).


// arr = {2, 5, 1, 5, 6, 9}
// Compare arr[1] (5) and arr[2] (1): Since 5 > 1, we swap them.


// arr = {2, 1, 5, 5, 6, 9}
// Compare arr[2] (5) and arr[3] (5): No swap needed (5 == 5).


// arr = {2, 1, 5, 5, 6, 9}
// Compare arr[3] (5) and arr[4] (6): No swap needed (5 < 6).


// arr = {2, 1, 5, 5, 6, 9}
// After the second pass, the second-largest element 6 has bubbled to the second-last position.

// Third Pass (i = 2):
// The outer loop runs for i = 2. The inner loop now compares the first n - i - 1 (i.e., n - 3 = 3) elements.
// Compare arr[0] (2) and arr[1] (1): Since 2 > 1, we swap them.


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[1] (2) and arr[2] (5): No swap needed (2 < 5).


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[2] (5) and arr[3] (5): No swap needed (5 == 5).


// arr = {1, 2, 5, 5, 6, 9}
// After the third pass, the third-largest element 5 has bubbled to its correct position.

// Fourth Pass (i = 3):
// The outer loop runs for i = 3. The inner loop now compares the first n - i - 1 (i.e., n - 4 = 2) elements.
// Compare arr[0] (1) and arr[1] (2): No swap needed (1 < 2).


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[1] (2) and arr[2] (5): No swap needed (2 < 5).


// arr = {1, 2, 5, 5, 6, 9}
// After the fourth pass, the array is already sorted.

// Final Sort

// {1, 2, 5, 5, 6, 9}Dry Run with a General n (Array Size):
// Let’s assume an array of size n 

// int arr[6] = {5, 2, 9, 1, 5, 6};
// First Pass (i = 0):
// The outer loop runs for i = 0, and the inner loop compares adjacent elements from the start of the array to n - i - 1 (i.e., n - 1).
// For this pass, j will go from 0 to n - 2 (i.e., 0 to 4).
// Here’s how the comparisons and swaps will happen:

// Compare arr[0] (5) and arr[1] (2): Since 5 > 2, we swap them.


// arr = {2, 5, 9, 1, 5, 6}
// Compare arr[1] (5) and arr[2] (9): No swap needed (5 < 9).


// arr = {2, 5, 9, 1, 5, 6}
// Compare arr[2] (9) and arr[3] (1): Since 9 > 1, we swap them.


// arr = {2, 5, 1, 9, 5, 6}
// Compare arr[3] (9) and arr[4] (5): Since 9 > 5, we swap them.


// arr = {2, 5, 1, 5, 9, 6}
// Compare arr[4] (9) and arr[5] (6): Since 9 > 6, we swap them.


// arr = {2, 5, 1, 5, 6, 9}
// After the first pass, the largest element 9 has bubbled to the end of the array.

// Second Pass (i = 1):
// The outer loop runs for i = 1. Now, the inner loop compares the first n - i - 1 (i.e., n - 2 = 4) elements.
// Compare arr[0] (2) and arr[1] (5): No swap needed (2 < 5).


// arr = {2, 5, 1, 5, 6, 9}
// Compare arr[1] (5) and arr[2] (1): Since 5 > 1, we swap them.


// arr = {2, 1, 5, 5, 6, 9}
// Compare arr[2] (5) and arr[3] (5): No swap needed (5 == 5).


// arr = {2, 1, 5, 5, 6, 9}
// Compare arr[3] (5) and arr[4] (6): No swap needed (5 < 6).


// arr = {2, 1, 5, 5, 6, 9}
// After the second pass, the second-largest element 6 has bubbled to the second-last position.

// Third Pass (i = 2):
// The outer loop runs for i = 2. The inner loop now compares the first n - i - 1 (i.e., n - 3 = 3) elements.
// Compare arr[0] (2) and arr[1] (1): Since 2 > 1, we swap them.


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[1] (2) and arr[2] (5): No swap needed (2 < 5).


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[2] (5) and arr[3] (5): No swap needed (5 == 5).


// arr = {1, 2, 5, 5, 6, 9}
// After the third pass, the third-largest element 5 has bubbled to its correct position.

// Fourth Pass (i = 3):
// The outer loop runs for i = 3. The inner loop now compares the first n - i - 1 (i.e., n - 4 = 2) elements.
// Compare arr[0] (1) and arr[1] (2): No swap needed (1 < 2).


// arr = {1, 2, 5, 5, 6, 9}
// Compare arr[1] (2) and arr[2] (5): No swap needed (2 < 5).


// arr = {1, 2, 5, 5, 6, 9}
// After the fourth pass, the array is already sorted.

// Final Sort

// {1, 2, 5, 5, 6, 9}




