#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the range "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Please Enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The unsorted array is :"<<endl;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<"]";
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0&&arr[j-1]>arr[j])
        {
            int copy=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=copy;
            j--;
        }
    }
    cout<<endl;
    cout<<"The sorted array is :"<<endl;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<"]";
}

//OUTPUT

// Enter the range 
// Please Enter the array elements :
// The unsorted array is :
// [12 13 176 65 543 ]
// The sorted array is :
// [12 13 65 176 543 ]