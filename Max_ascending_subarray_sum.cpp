#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=arr[0];
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            sum=sum+arr[i];
            maxi=max(maxi,sum);
        }
        else
        {
            sum=arr[i];
        }
    }
    cout<<"The max ascending sum is "<<maxi;
}