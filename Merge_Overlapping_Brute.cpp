#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of intervals: "<<endl;
    cin >> n;  // User input for the number of intervals
    
    vector<vector<int>> intervals(n, vector<int>(2));  // Create a 2D vector to store the intervals
    
    // Input intervals from the user
    cout << "Enter the intervals (start and end):\n"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Interval " << i + 1 << " (start and end): "<<endl;
        cin >> intervals[i][0] >> intervals[i][1];  // Take input for start and end of each interval
    }
    
    // Create an answer vector to store merged intervals
    vector<vector<int>> ans;
    int size = intervals.size();  // Get the number of intervals
    
    // Sort the intervals based on the starting time
    sort(intervals.begin(), intervals.end());
    
    // Loop through each interval
    for (int i = 0; i < size; i++) {
        int start = intervals[i][0];  // Start of the current interval
        int end = intervals[i][1];    // End of the current interval
        
        // If the answer is not empty and the end time is less than or equal to the last merged interval's end time, skip
        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }
        
        // Try to merge with the next interval if possible
        for (int j = i + 1; j < size; j++) {
            if (intervals[j][0] <= end) {  // If the next interval starts before the current interval ends
                end = max(end, intervals[j][1]);  // Extend the end time of the current interval
            } else {
                break;  // If the next interval doesn't overlap, break the loop
            }
        }
        
        // Push the merged interval into the result vector
        ans.push_back({start, end});
    }
    
    // Output the merged intervals
    cout << "Merged intervals: \n"<<endl;
    for (const auto& interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "]\n";  // Print each merged interval
    }
    
    return 0;
}


// OUTPUT


// Enter the number of intervals: 
// Enter the intervals (start and end):

// Interval 1 (start and end): 
// Interval 2 (start and end): 
// Interval 3 (start and end): 
// Interval 4 (start and end): 
// Merged intervals: 

// [1, 4]
// [5, 8]
