//      also optimal

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter your Desired Sum"<<endl;
    int k;
    cin>>k;
    cout<<"Your Original Array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    unordered_map<int,int>mpp;// USING HASH MAP
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        int rem=k-a;
        if(mpp.find(rem)!=mpp.end())
        {
            v.emplace_back(mpp[rem]);
            v.emplace_back(i);
        }
        mpp[a]=i;
    }

    cout<<"The Indexes that result to "<<k<<" are ";
    for(auto  it:v)
    {
        cout<<it+1<<" ";
    }
}



// OUTPUT

// Enter the size of the array : 
// Enter the array elements 
// Enter your Desired Sum
// Your Original Array is
// 1 2 3 8 5 
// The Indexes that result to 11 are 3 4 


// LEETCODE BETTER


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector<int>v;
//         unordered_map<int,int>mpp;
//         for(int i=0;i<n;i++)
//         {
//             int a=nums[i];
//             int rem=target-a;
//             if(mpp.find(rem)!=mpp.end())
//             {
//                 v.emplace_back(mpp[rem]);
//                 v.emplace_back(i);
//             }
//             mpp[a]=i;
//         }
//         return v;
//     }
// };