//Given an array of integers arr[] and a number k, count the number of subarrays having XOR of their elements as k.

#include<iostream>
#include<map>
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
    cout<<"Your entered array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter you target XOR"<<endl;
    int k;
    cin>>k;
    int xr=0;
    int count=0;
    unordered_map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++)
    {
        xr=xr^arr[i];
        int x=xr^k;
        count=count+mpp[x];
        mpp[xr]++;
    }
    cout<<"The Number of Subarrays with XOR "<<xr<<" are "<<count;
}

// OUTPUT

// Enter the size of the array
// Enter the array elements
// Your entered array is
// 4 2 2 6 4 
// Enter you target XOR
// The Number of Subarrays with XOR 6 are 4