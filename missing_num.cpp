#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array "<<endl;
    int n;
    int asum=0;
    int sum=0;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elemnts"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum=(n*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        asum=asum+arr[i];
    }
    int num=0;
    num=sum-asum;
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