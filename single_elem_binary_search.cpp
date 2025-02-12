#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int low = 1, high = n - 2;

        // If the array has only one element
        if (n == 1) return arr[0];

        // Check if the unique element is at the first or last position
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

        // Binary Search for the single non-duplicate element
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If mid is the unique element
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }

            // Checking which side to move
            if (((mid % 2 == 1) && arr[mid] == arr[mid - 1]) || 
                ((mid % 2 == 0) && arr[mid] == arr[mid + 1])) {
                low = mid + 1;  // Move right
            } else {
                high = mid - 1; // Move left
            }
        }

        return -1; // This case won't be reached in a valid input
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted, every element appears twice except one): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int result = sol.singleNonDuplicate(arr);

    cout << "The single non-duplicate element is: " << result << endl;
    
    return 0;
}



// as see if elem are on the left side before the occurence of the single elem they occur like even odd even odd but as soon as single elem comes it becomes odd even odd even