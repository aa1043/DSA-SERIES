

//                SELECTION SORT


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

    for(int i=0;i<n-1;i++)// BECAUSE N-1 PASSES ARE REQUIRED FOR N ELEMENT
    {
        int min=i;//Store the index 
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])// checks the value
            {
                min=j;// index
            }
        }
        int copy=arr[i];// SWAPS THE VALUE
        arr[i]=arr[min];
        arr[min]=copy;
    }
    cout<<"The sorted array using Selection Sort is :"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}


//INPUT

// 10
// 4
// 5
// 1
// 23
// 2
// 34
// 134
// 52
// 4
// 98


//OUTPUT

// Enter the size of the array
// Enter the array elements
// The unsorted array is
// [ 4 5 1 23 2 34 134 52 4 98 ]
// The sorted array using Selection Sort is :
// [ 1 2 4 4 5 23 34 52 98 134 ]



//      DRY   RUN


// The unsorted array is: [ 64 25 12 22 11 ]

// Dry Run of Selection Sort:
// Step 1: Assume min = arr[0] = 64
//   Found smaller element arr[1] = 25
//   Found smaller element arr[2] = 12
//   Found smaller element arr[4] = 11
//   Swap arr[0] = 64 with arr[4] = 11
//   Array after step 1: [ 11 25 12 22 64 ]

// Step 2: Assume min = arr[1] = 25
//   Found smaller element arr[2] = 12
//   Swap arr[1] = 25 with arr[2] = 12
//   Array after step 2: [ 11 12 25 22 64 ]

// Step 3: Assume min = arr[2] = 25
//   Found smaller element arr[3] = 22
//   Swap arr[2] = 25 with arr[3] = 22
//   Array after step 3: [ 11 12 22 25 64 ]

// Step 4: Assume min = arr[3] = 25
//   No swap needed, arr[3] is already the smallest.
//   Array after step 4: [ 11 12 22 25 64 ]

// The sorted array is: [ 11 12 22 25 64 ]
