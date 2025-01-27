#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array "<<endl;
    int n;
    int xor1=0;
    int xor2=0;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elemnts"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        xor1=xor1^i;
    }
    for(int i=0;i<n;i++)
    {
        xor2=xor2^arr[i];
    }
    int num=0;
    num=xor1^xor2;
    cout<<"Your Entered Array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The Missing Number is"<<endl;
    cout<<num;
}

// OUTPUT

// Enter the size of the array 
// Enter the array elemnts
// Your Entered Array is
// 1 2 3 4 0 6 7 8 9 10 
// The Missing Number is
// 5