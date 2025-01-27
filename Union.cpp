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
        else if(a[h1]<b[h2])
        {
            if(c.empty()||c.back()!=a[h1])
            {
                c.emplace_back(a[h1]);
            }
            h1++;
        }
        else
        {
            if(c.empty()||c.back()!=b[h2])
            {
                c.emplace_back(b[h2]);
            }
            h2++;
        }
    }
    while(h1<n1)
    {
        if(c.empty()||c.back()!=a[h1])
        {
            c.emplace_back(a[h1]);
        }
        h1++;
    }
        while(h2<n2)
    {
        if(c.empty()||c.back()!=b[h2])
        {
            c.emplace_back(b[h2]);
        }
        h2++;
    }

    cout<<endl;
    for(auto it:c)
    {
        cout<<it<<" ";
    }
}