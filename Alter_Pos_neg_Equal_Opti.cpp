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
    vector<int>update(n,0);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            update[pos]=arr[i];
            pos=pos+2;
        }
        else
        {
            update[neg]=arr[i];
            neg=neg+2;
        }
    }
    cout<<"Your altered array is "<<endl;
    for(auto it:update)
    {
        cout<<it<<" ";
    }
}

// OUTPUT
// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 3 1 -2 -5 2 -4 
// Your altered array is 
// 3 -2 1 -5 2 -4 
