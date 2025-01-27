#include<iostream>
#include<map>
#include<algorithm>
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
    cout<<"Enter your Desired Sum"<<endl;
    int k;
    cin>>k;
    cout<<"Your Original Array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    map<int,int>mpp;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end())//it means rem is there in the map
        {
            int len=i-mpp[rem];
            maxlen=max(maxlen,len);
        }
        if(mpp.find(sum)==mpp.end())//it means sum is not there in the map
        {
            mpp[sum]=i;
        }
    }
    cout<<"The maximum length of subset for sum = "<<k<<" is "<<maxlen;
}