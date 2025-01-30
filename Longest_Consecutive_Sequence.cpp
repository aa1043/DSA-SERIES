// 128. Longest Consecutive Sequence
// Solved
// Medium
// Topics
// Companies
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the array elements " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Entered array is " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int count=1;
    int maxii=1;
    sort(arr.begin(),arr.end());
    if(arr.empty())
    {
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]==0)
        {
            continue;// IF THEY ARE EQUAL
        }
        if(arr[i+1]-arr[i]==1)
        {
            count++;
        }
        else// SOME DIFFERENT SEQUENCE ARISES
        {
            maxii=max(count,maxii);// STORE THE CURRENT LENGTH
            count=1;// RESET
        }
    }
    int k=0;
    k=max(maxii,count);// STORES THE MAX AMONG ALL
    cout<<"The Longest Common sub sequence length is "<<k;
}


// OUTPUT

// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 100 4 200 1 3 2 49 50 52 53 51 55 
// The Longest Common sub sequence length is 5