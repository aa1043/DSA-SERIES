#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter your Target Sum"<<endl;
    int k;
    cin>>k;
    cout<<"Your Original Array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)// NOW J STARTS FROM I+1 BECAUSE IF  WOULD HAVE STARTED FROM 0 THEN THEY TEND TO CHECK THE SAME DIGITS AGAIN AND AGAIN
        {
            if(arr[i]+arr[j]==k)
            {
                v.emplace_back(i);
                v.emplace_back(j);
            }
        }
    }
    cout<<"The Indexes that result to "<<k<<" are ";
    for(auto  it:v)
    {
        cout<<it+1<<" ";
    }
}

//OUTPUT

// Enter the size of the array : 
// Enter the array elements 
// Enter your Target Sum
// Your Original Array is
// 1 2 3 8 5 
// The Indexes that result to 11 are 3 4 




// LEECODE BRUTE FORCE


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector<int>v;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     v.emplace_back(i);
//                     v.emplace_back(j);
//                     break;
//                 }
//             }
//         }
//         return v;
//     }
// };