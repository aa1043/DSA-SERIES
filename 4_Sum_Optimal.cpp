#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(), arr.end()); // Sorting the array to use two-pointer approach
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue; // Avoid duplicate quadruplets
            
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && arr[j] == arr[j - 1]) continue; // Avoid duplicate quadruplets
                
                int k = j + 1;
                int l = n - 1;
                
                while (k < l) {
                    long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l]; // Compute sum
                    
                    if (sum < target) {
                        k++; // Increase left pointer if sum is less than target
                    } else if (sum > target) {
                        l--; // Decrease right pointer if sum is more than target
                    } else {
                        ans.push_back({arr[i], arr[j], arr[k], arr[l]}); // Store valid quadruplet
                        
                        k++;
                        l--;
                        // Avoid duplicates
                        while (k < l && arr[k] == arr[k - 1]) k++;
                        while (k < l && arr[l] == arr[l + 1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    Solution sol;
    vector<vector<int>> result = sol.fourSum(arr, target);
    
    cout << "Quadruplets with the target sum are:\n";
    for (auto &quad : result) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i] << (i < quad.size() - 1 ? ", " : "");
        }
        cout << "]\n";
    }
    
    return 0;
}
