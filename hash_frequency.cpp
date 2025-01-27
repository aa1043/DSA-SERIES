#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array :"<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;


    int hash[18]={0};//max elements you need may be anything max 1000000(inside main) but 10000000 if declared globally
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }


    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    while(q>0)
    {
        int number;
        cin>>number;
        cout<<number<<" appears "<<hash[number]<<" times"<<endl;
        q--;
    }
    int max=0;
    int nu=0;
    for(int i=0;i<18;i++)
    {
        if(hash[i]>max)
        {
            max=hash[i];
            nu=arr[max-1];
        }
    }
    cout<<"Element "<<nu<<" occurs the most that is "<<max<<" times";
}


//     INPUT
// 5
// 1
// 2
// 1
// 3
// 1
// 6
// 1
// 2
// 5
// 15
// 7
// 10

//   OUTPUT

// Enter the size of the array
// Enter the array elements
// Original Array :
// [ 1 2 1 3 1 ]
// Enter the number of queries
// 1 appears 3 times
// 2 appears 1 times
// 5 appears 0 times
// 15 appears 0 times
// 7 appears 0 times
// 10 appears 0 times
//Element 1 occurs the most that is 3 times


// Iterations:

// i = 0: arr[0] = 1 → hash[1]++ → hash[1] = 1
// i = 1: arr[1] = 2 → hash[2]++ → hash[2] = 1
// i = 2: arr[2] = 3 → hash[3]++ → hash[3] = 1
// i = 3: arr[3] = 2 → hash[2]++ → hash[2] = 2
// i = 4: arr[4] = 1 → hash[1]++ → hash[1] = 2


