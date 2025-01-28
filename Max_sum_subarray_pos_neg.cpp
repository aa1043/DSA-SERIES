#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
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
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum =0;// so that sum gets reinitalized after each pass
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"The maximum subarray is"<<endl;
    cout<<maxsum;
}


// OUTPUT
// Enter the size of the array 
// Enter the array elements
// The array elements are
// 2 3 3 3 4 2 3 -30 3 4 
// The maximum subarray is
// 20

// Enter the size of the array 
// Enter the array elements
// The array elements are
// -32 -12 -3 -4 -53 
// The maximum subarray is
// -3