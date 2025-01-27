#include<iostream>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    cout<<endl;
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    for(auto it:mpp)
    {
        if((it.second)>1)
        {
            cout<<"Duplicates are Present"<<endl;
            return 0;
        }
    }
    cout<<"No Duplicates are present"<<endl;
    return 0;
}

// OUTPUT 1

// Enter the size of the array
// 1->1
// 2->1
// 3->1
// 4->1
// 5->1
// 6->1
// 7->1
// 8->1
// 9->1
// 10->1
// No Duplicates are present


// OUTPUT 2

// Enter the size of the array
// 1->1
// 2->1
// 3->1
// 4->1
// 5->1
// 6->1
// 7->1
// 8->2
// 10->1
// Duplicates are Present
