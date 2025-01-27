#include<iostream>
using namespace std;
int main()
{
    int bol=0;
    cout<<"Enter the size of the array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            bol=1;
            break;
        }
    }
    cout<<endl;
    if(bol==1)
    {
        cout<<"Not Sorted";
    }
    else
    {
        cout<<"Sorted";
    }
}