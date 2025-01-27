#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the 1st array "<<endl;
    int n1;
    cin>>n1;
    int a[n1];
    cout<<"Enter "<<n1<<" Elements for the 1st array"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of the 2nd array "<<endl;
    int n2;
    cin>>n2;
    int b[n2];
    cout<<"Enter "<<n2<<" Elements for the 2nd array"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    cout<<"Your First array is"<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Your Second array is"<<endl;
    for(int i=0;i<n2;i++)
    {
        cout<<b[i]<<" ";
    }
    vector<int>c;
    int h1=0;
    int h2=0;
    while(h1<n1&&h2<n2)
    {
        if(a[h1]==b[h2])
        {
            if(c.empty()||c.back()!=a[h1])
            {
                c.emplace_back(a[h1]);
            }
            h1++;
            h2++;
        }
        else if (a[h1] < b[h2]) // Cause they are sorted 
        {
            h1++;//if h1 is less h1++
        } 
        else 
        {
            h2++;// else if h2 is less h2++
        }
    }
    
    cout<<endl<<"The Intersection is"<<endl;
    for(auto it:c)
    {
        cout<<it<<" ";
    }
}


// OUTPUT

// Enter the size of the 1st array 
// Enter 10 Elements for the 1st array
// Enter the size of the 2nd array 
// Enter 10 Elements for the 2nd array
// Your First array is
// 1 2 3 4 5 6 7 8 9 10 
// Your Second array is
// 1 2 3 4 5 6 7 9 9 10 
// The Intersection is
// 1 2 3 4 5 6 7 9 10 