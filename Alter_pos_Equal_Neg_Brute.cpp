#include<iostream>
#include<vector>
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
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos.emplace_back(arr[i]);
        }
        else
        {
            neg.emplace_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        arr[2*i]=pos[i];
        arr[(2*i)+1]=neg[i];
    }
    cout<<"Your altered array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// OUTPUT
// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 3 1 -2 -5 2 -4 
// Your altered array is 
// 3 -2 1 -5 2 -4 