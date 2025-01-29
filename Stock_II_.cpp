// 122. Best Time to Buy and Sell Stock II
// Solved
// Medium
// Topics
// Companies
// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the Number of days : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Costs "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Entered Costs are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            sum=sum+(arr[i+1]-arr[i]);
        }
    }
    cout<<endl<<"The total profit is : "<<sum;
}