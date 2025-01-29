

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Entered array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int h=0;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=i+1)
        {
            h=i+1;
        }
    }
    cout<<endl<<"The number of citations are "<<h;
}


// OUTPUT


// Enter the size of the array: 
// Enter the array elements 
// Your Entered array is 
// 0 0 1 1 1 3 3 3 3 3 3 7 7 7 8 8 4 4 4 4 4 5 5 5 5 5 6 6 6 6 6 
// The number of citations are 6


// EXPLANATION OF THE LOGIC

// We are checking if at least (i+1) papers have at least (i+1) citations.
// If this condition is met, we update h = i + 1.

// [8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 1, 1, 1, 0, 0]
// Now, let's check what happens at each index i:

// i (0-based index)	Citations[i]	i + 1 (1-based)	Condition: citations[i] >= i + 1	h updated?
// 0	8	1	✅ 8 >= 1	h = 1
// 1	8	2	✅ 8 >= 2	h = 2
// 2	7	3	✅ 7 >= 3	h = 3
// 3	7	4	✅ 7 >= 4	h = 4
// 4	7	5	✅ 7 >= 5	h = 5
// 5	6	6	✅ 6 >= 6	h = 6
// 6	6	7	❌ 6 < 7	STOP!
