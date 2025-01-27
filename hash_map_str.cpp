#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the string"<<endl;
    string str;
    getline(cin,str);
    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    map <int,int>mpp;//o(log n)
    //or unordered_map <int,int>mpp; as it takes o(1) in avg and best 
    for(int i=0;i<str.size();i++)
    {
        mpp[str[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<(char)it.first<<"->"<<it.second<<endl;
    }

    while(q>0)
    {
        char ch;
        cin>>ch;
            cout<<ch<<" occurs "<<mpp[ch]<<" times"<<endl;
        q--;
    }
}
// INPUT

// aryadeeAAAp
// 4
// A
// a
// e
// z

// OUTPUT

// Enter the string
// Enter the number of queries
// A->3
// a->2
// d->1
// e->2
// p->1
// r->1
// y->1
// 3
// 2
// 2
// 0


