
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int a;
    cin>>a;
    int arr[a];
    cout<<"Enter "<<a<<" array elements"<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"Enter the "<<i+1<<" Element"<<endl;
        cin>>arr[i];
    }
    cout<<"The resultant array is :"<<endl;
    cout<<"[";
    for(int i=0;i<a;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<" ]";
    return 0;
}

//INPUT

// 5
// 12
// 23
// 4
// 22
// 4

//OUTPUT

// Enter the size
// Enter 5 array elements
// Enter the 1 Element
// Enter the 2 Element
// Enter the 3 Element
// Enter the 4 Element
// Enter the 5 Element
// The resultant array is :
// [ 12 23 4 22 4 ]