#include<iostream>
using namespace std;
int pivt(int arr[],int low,int high)
{
    int pivot=arr[low];// Choose the first element as pivot
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&&i<high)// NOW HERE <= BECAUSE WE ARE KEEPING THE SAME ELEMENTS LIKE DUPLICATES ON THE LEFT SIDE WITH THE SMALL ONES
        {
            i++;
        }
        while(arr[j]>pivot&&j>low)// HERE JUST > BECAUSE WE ARE KEEPING THE SAME ELEMENTS LIKE DUPLICATES ON THE LEFT SIDE WITH THE SMALL ONES
        {
            j--;
        }
        if(i<j)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
        int piv=pivt(arr,low,high);
        quicksort(arr,low,piv-1);
        quicksort(arr,piv+1,high);
    
}
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
    cout<<"Your Unsorted Array is"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    quicksort(arr,0,n-1);
    cout<<"Your Sorted Array is"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}

// OUTPUT
// // Enter the size of the array: Enter the array elements:
// // The unsorted array is:
// // [12 13 176 65 543 1 ]
// // The sorted array is:
// // [1 12 13 65 176 543 ]


//   DESCENDING

// #include<iostream>
// using namespace std;
// int pivt(int arr[],int low,int high)
// {
//     int pivot=arr[low];// Choose the first element as pivot
//     int i=low;
//     int j=high;
//     while(i<j)
//     {
//         while(arr[i]>=pivot&&i<high)// NOW HERE <= BECAUSE WE ARE KEEPING THE SAME ELEMENTS LIKE DUPLICATES ON THE LEFT SIDE WITH THE SMALL ONES
//         {
//             i++;
//         }
//         while(arr[j]<pivot&&j>low)// HERE JUST > BECAUSE WE ARE KEEPING THE SAME ELEMENTS LIKE DUPLICATES ON THE LEFT SIDE WITH THE SMALL ONES
//         {
//             j--;
//         }
//         if(i<j)
//         {
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//     }
//     int temp=arr[j];
//     arr[j]=arr[low];
//     arr[low]=temp;
//     return j;
// }
// void quicksort(int arr[],int low,int high)
// {
//     if(low<high)
//     {
//         int piv=pivt(arr,low,high);
//         quicksort(arr,low,piv-1);
//         quicksort(arr,piv+1,high);
//     }
// }
// int main()
// {
//     cout<<"Enter the size of the array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Your Unsorted Array is"<<endl;
//     cout<<"[ ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"]"<<endl;
//     quicksort(arr,0,n-1);
//     cout<<"Your Sorted Array is"<<endl;
//     cout<<"[ ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"]";
//     return 0;
// }


// // //  OUTPUT

// // Enter the size of the array
// // Enter the array elements
// // Your Unsorted Array is
// // [ 12 125 43 3674 2 5 70 3 456 44 54 26 62 57 4 12 38 93 53 1 ]
// // Your Sorted Array is
// // [ 3674 456 125 93 70 62 57 54 53 44 43 38 26 12 12 5 4 3 2 1 ]




