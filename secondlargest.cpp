#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    int max=0;
    int smax=-1;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>smax&&arr[i]<max)
        {
            smax=arr[i];
        }
    }
    cout<<"The Second largest element is "<<endl;
    cout<<smax;
}

//Input

// 5

// 2
// 2
// 2
// 2
// 2

//OUTPUT


// Enter the size of the array
// Enter the size of the array
// Enter the array elements
// The Second largest element is 
// -1



//Input

// 5
// 23
// 1
// 345
// 253
// 23

//OUTPUT


// Enter the size of the array
// Enter the size of the array
// Enter the array elements
// The Second largest element is 
// 253