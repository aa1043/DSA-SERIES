#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Entered array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];//places j next to i;
            i++;//now j is i;
        }
    }
    cout<<"The unique array is"<<endl;
    for(int j=0;j<i+1;j++)// Now limit is i+1 cause i starts from 0
    {
        cout<<arr[j]<<" ";
    }
}


// OUTPUT

// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 12 12 12 3 3 
// The unique array is
// 12 3 