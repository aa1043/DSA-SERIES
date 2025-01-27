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
   vector<int> temp;
   for(int i=0;i<n;i++)
   {
     if(arr[i]!=0)
     {
        temp.emplace_back(arr[i]);
     }
   }
   cout<<endl;
   cout<<"Your non zero array is "<<endl;
   for(auto it:temp)
   {
    cout<<it<<" ";
   }
   int k=temp.size();
   for(int i=0;i<k;i++)
   {
    arr[i]=temp[i];
   }
   for(int i=k;i<n;i++)
   {
    arr[i]=0;
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