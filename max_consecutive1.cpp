#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int count=0;
    int maxi=0;
    cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ARRAY ELEMENTS "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(count>maxi)
            {
                maxi=count;
            }
        }
        else
        {
            count=0;
        }
    }
    cout<<"The most number of consecutive 1's are "<<maxi;
}