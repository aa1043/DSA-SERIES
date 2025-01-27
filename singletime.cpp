#include<iostream>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map <int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;// We are incrementing the frequency that corresponds to the value as map stores like map<value,frequency>
    }
    for(auto it:mpp)
    {
        // cout<<it.first<<" occurs "<<it.second<<" times" <<endl;
        if(it.second==1)
        {
            cout<<it.first;
        }
    }
}