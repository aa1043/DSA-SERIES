#include<iostream>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;

    map <int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;// We are incrementing the frequency that corresponds to the value as map stores like map<value,frequency>
    }
    for(auto it:mpp)
    {
        cout<<it.first<<" occurs "<<it.second<<" times" <<endl;
    }
    
    while(q>0)
    {
    int number;
    cin>>number;
    cout<<mpp[number]<<endl;
    q--;
    }
    int max=0;
    int val=0;
    for(auto it:mpp)
    {
        if(it.second>max)
        {
            max=it.second;
            val=it.first;
        }
    }
    cout<<"The most occuring is "<<val<<" as it occurs "<<max<<" times";
}

// so hash array needed a total space of huge amount for that case we used hash map because hash map just stores those values those are needed

// INPUT
// 4
// 12
// 32
// 12
// 4
// 3
// 12
// 32
// 4


//OUTPUT

// Enter the size of the array
// Enter the number of queries
// 4 occurs 1 times
// 12 occurs 2 times
// 32 occurs 1 times
// 2
// 1
// 1
//The most occuring is 12 as it occurs 2 times


// ITERATION

// i = 0: arr[0] = 12 → mpp[arr[0]]++ → mpp[12]++ → mpp[12] = 1
// i = 1: arr[1] = 32 → mpp[arr[1]]++ → mpp[32]++ → mpp[32] = 1
// i = 2: arr[2] = 12 → mpp[arr[2]]++ → mpp[12]++ → mpp[12] = 2
// i = 3: arr[3] = 4  → mpp[arr[3]]++ → mpp[4]++  → mpp[4]  = 1


// mpp[12] = 2  // 12 appears 2 times
// mpp[32] = 1  // 32 appears 1 time
// mpp[4]  = 1  // 4 appears 1 time

// Query 1: number = 12 → mpp[12] = 2 → Output: "12 occurs 2 times"
// Query 2: number = 32 → mpp[32] = 1 → Output: "32 occurs 1 time"
// Query 3: number = 4  → mpp[4]  = 1 → Output: "4 occurs 1 time"


// mpp[12] = 2  ('12 appears 2 times')
// mpp[32] = 1  ('32 appears 1 time')
// mpp[4]  = 1  ('4 appears 1 time')

