// 1365. How Many Numbers Are Smaller Than the Current Number
// Solved
// Easy
// Topics
// Companies
// Hint
// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

// Return the answer in an array.

 

// Example 1:

// Input: nums = [8,1,2,2,3]
// Output: [4,0,1,1,3]

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Entered array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                count++;
            }
        }
        v.emplace_back(count);
    }
    cout<<endl<<"Your Modified array is "<<endl; 
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}
