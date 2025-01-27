#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the first array "<<endl;
    int n1;
    cin>>n1;
     vector<int>a(n1);
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of the 2nd array";
    int n2;
    cin>>n2;
    vector<int>b(n2);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    vector<int>c;
    for(int i=0;i<n1;i++)
    {
        if(a[i]!=0)
        {
            c.emplace_back(a[i]);
        }
    }
        for(int i=0;i<n2;i++)
    {
        c.emplace_back(b[i]);
    }
    int y=c.size();
    for(int i=0;i<y-1;i++)
    {
        for(int j=0;j<y-i-1;j++)
        {
            if(c[j+1]<c[j])
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }

    cout<<"Merged array is"<<endl;
    for(auto it:c)
    {
        cout<<it<<" ";
    }
}