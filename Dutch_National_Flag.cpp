// RULES OF DUTCH FLAG ALGORITH

//  3 POINTER LOW MID HIGH

// FROM 0TH POSITION TO LOW-1 EVERY POSITION WILL HAVE 0
// FROM LOW TO MID-1 EVERY POSITION WILL HAVE 1
// FROM MID TO HIGH-1 IT WILL BE UNSORTED LIKE MIXED
// FROM HIGH+1 TO  N-1 EVERY POSITION WILL HAVE 2


#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements only 0 1 2"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
     cout<<"The sorted array elements are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
