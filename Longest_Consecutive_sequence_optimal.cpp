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
#include<unordered_set>
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
    int count=0;
    int maxii=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(auto it:s)
    {
        if(s.find(it-1)==s.end())//// Check if it is the start of a sequence
        {
            count=1;
            int x=it;
            while(s.find(x+1)!=s.end())// Check each element after the first
            {
                x=x+1;
                count++;
            }
            maxii=max(maxii,count);
        }
    }
    cout<<"The Longest Common sub sequence length is "<<maxii;
}

// OUTPUT
// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 100 4 200 1 3 2 49 50 52 53 51 55 
// The Longest Common sub sequence length is 5
