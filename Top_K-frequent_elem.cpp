#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

int main() 
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter the number of top elements: " << endl;
    int k;
    cin >> k;

    cout << "Your Original Array is: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v;
    priority_queue<pair<int, int>> pq; //  Max heap
    unordered_map<int, int> mpp;

    //  Count the frequencies
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        pq.push({it.second,it.first});// it.second is first cause we are sorting on the basis of frequency
    }
    for(int i=0;i<k;i++)
    {
        v.emplace_back(pq.top().second);// .second because we need the element if we have needed the frequency then it would have been .first
        pq.pop();// clearing the top otherwise same element will come
    }

    cout << "Top " << k << " frequent elements are: ";
    for (auto it : v) 
    {
        cout << it << " ";
    }

    return 0;
}



//  OUTPUT

//  Enter the size of the array: 
//  Enter the array elements: 
//  Enter the number of top elements: 
//  Your Original Array is: 
//  1 2 2 4 5 5 5 7 8 9 
//  Top 2 frequent elements are: 5 2 