#include<iostream>
using namespace std;
void rev(int arr[],int i,int n)
{
    int copy=0;
    if(i>=(n/2))
    {
        return;
    }
    copy=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=copy;
    rev(arr,i+1,n);
}
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    cout<<"The array is"<<endl;
    cout<<"[ ";
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    rev(arr,0,n);
    cout<<"The reversed array is"<<endl;
    cout<<"[ ";
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}

// INPUT

// 5
// 12
// 23
// 12
// 4

//OUTPUT

// Enter the size of the array
// Enter 5 array elements
// Enter the 0 element
// Enter the 1 element
// Enter the 2 element
// Enter the 3 element
// Enter the 4 element
// The array is
// [ 12 23 12 4 2 ]
// The reversed array is
// [ 2 4 12 23 12 ]