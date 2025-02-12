// 896. Monotonic Array
// Solved
// Easy
// Topics
// Companies
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 

// Example 1:

// Input: nums = [1,2,2,3]
// Output: true
// Example 2:

// Input: nums = [6,5,4,4]
// Output: true
// Example 3:

// Input: nums = [1,3,2]
// Output: false


#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& arr) 
{
        int n=arr.size();
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                if(flag==0)
                {
                    flag=1;
                }
                else if(flag==-1)
                {
                    return false;
                }
            }
            else if(arr[i]<arr[i-1])
            {
                if(flag==0)
                {
                    flag=-1;
                }
                else if(flag==1)
                {
                    return false;
                }
            }
        }
        return true;
    }

int main() 
{
    int n;
    cout << "Enter the number of elements: "<<endl;
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    if (isMonotonic(arr)) 
    {
        cout << "It is Monotonic" << endl;
    } 
    else 
    {
        cout << "It is not Monotonic" << endl;
    }

    return 0;
}