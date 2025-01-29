
// 123. Best Time to Buy and Sell Stock III
// Solved
// Hard
// Topics
// Companies
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. You may complete at most two transactions.

// Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

 

// Example 1:

// Input: prices = [3,3,5,0,0,3,1,4]
// Output: 6
// Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
// Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the Number of days : "<<endl;
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Costs "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Your Entered Costs are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    int fb=INT_MAX;
    int fs=0;
    int sb=INT_MAX;
    int ss=0;
    for(auto it:v)
    {
        fb=min(fb,it);
        fs=max(fs,it-fb);
        sb=min(sb,it-fs);
        ss=max(ss,it-sb);
    }
    cout<<endl<<"The total profit is : "<<ss;
}