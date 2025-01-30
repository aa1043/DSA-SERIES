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

    int ind = -1;
    // Step 1: Find the first decreasing element from the right
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    // If no such element is found, reverse the array to get the smallest permutation
    if(ind == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        // Step 2: Find the smallest element greater than arr[ind] from the right
        for(int i = n - 1; i > ind; i--)
        {
            if(arr[i] > arr[ind])
            {
                swap(arr[i], arr[ind]);
                break; // Important to prevent multiple swaps
            }
        }
        // Step 3: Reverse the remaining part
        reverse(arr.begin() + ind + 1, arr.end());
    }

    cout << "The next permutation is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// OUTPUT

// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 1 3 2 
// The next permutation is: 
// 2 1 3 


// ALSO THIS ONE IS A OPTIMAL APPROACH THERE IS ANOTHER APPROACH WHICH IS


// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };