#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all unique its that sum to zero
vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> ans;
    int n = arr.size();
    
    // Sorting the array to use two-pointer approach
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++) {
        // Avoiding duplicate elements for the first number
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        
        int j = i + 1; // Left pointer
        int k = n - 1; // Right pointer
        
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            
            if (sum < 0) {
                j++; // Move left pointer right to increase sum
            } 
            else if (sum > 0) {
                k--; // Move right pointer left to decrease sum
            } 
            else {
                // Found a it that sums to zero
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                
                // Avoiding duplicate elements for the second number
                while (j < k && arr[j] == arr[j - 1]) {
                    j++;
                }
                // Avoiding duplicate elements for the third number
                while (j < k && arr[k] == arr[k + 1]) {
                    k--;
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<vector<int>> result = threeSum(arr);
    
    cout << "\nUnique triplets that sum to zero: \n";
    for (auto it : result) {
        cout << "[" << it[0] << ", " << it[1] << ", " << it[2] << "]\n";
    }
    
    if (result.empty()) {
        cout << "No its found." << endl;
    }
    
    return 0;
}


// Output

// Enter the number of elements: Enter 5 elements: 
// Unique its that sum to zero: 
// [-3, 1, 2]
// [-1, 0, 1]
