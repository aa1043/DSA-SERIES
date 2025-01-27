#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Original Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;// gets the index of the first 0 s index
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    cout<<endl;
   cout<<"Your new updated array is "<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}



// Enter the size of the array: 
// Your Original Array is: 
// 2 3 0 0 9 45 0 0 
// Your non zero array is 
// 2 3 9 45 
// Your new updated array is 
// 2 3 9 45 0 0 0 0 