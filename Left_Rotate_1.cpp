#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Original Array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
         arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"Your updated array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}



// Enter the size of the array : 
// Enter the array elements 
// Your Original Array is
// 12 13 176 65 543 1 
// Your updated array is
// 13 176 65 543 1 12 