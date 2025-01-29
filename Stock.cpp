// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.




#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main() 
{
    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array : " << endl;
    int n;
    cin >> n;  // Input the number of days (array size)
    
    int arr[n];  // Declare an array to store stock prices
    cout << "Enter the Stock Prices" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];  // Input stock prices for each day
    }

    int min = arr[0];   // Initialize `min` as the first day's price
    int maxprof = 0;    // Variable to store the maximum profit
    int prof = 0;       // Temporary variable to calculate profit
    int j = 0;          // Variable to track the day of selling

    // Loop through the array starting from the second day
    for (int i = 1; i < n; i++) 
    {
        // Update the minimum price if a lower price is found
        if (arr[i] < min) 
        {
            min = arr[i];
        }

        // Calculate the profit by selling at the current day's price
        prof = arr[i] - min;

        // Update the maximum profit found so far
        maxprof = max(maxprof, prof);

        // Track the day of the current iteration
        j = i;
    }

    // Output the maximum profit and the corresponding days
    cout << "The Maximum Profit will be " << maxprof;
}
