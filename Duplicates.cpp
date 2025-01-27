#include<iostream>
#include<set>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Original Array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int k=0;
    for(auto it:s)
    {
        arr[k]=it;
        k++;
    }
    cout<<"Your Unique Array is :"<<endl;
    for(int i=0;i<k;i++) //  only iterate till the size of the set
    {
        cout<<arr[i]<<" ";
    } 
}


 //  OUTPUT

 //  Enter the size of the array: 
 //  Enter the array elements :
 //  Your Original Array is :
 //  12 12 12 3 3 
 //  Your Unique Array is :
 //  3 12 