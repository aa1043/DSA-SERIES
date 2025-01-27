#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int j=1;
    cout<<"Enter your desired string"<<endl;
    string str;
    getline(cin,str);
    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    unordered_map <int,int>mpp;
    for(int i=0;i<str.size();i++)
    {
        mpp[str[i]]++;
    }
    while(q>0)
    {
        cout<<"Enter querie number "<<j<<endl;
        char ch;
        cin>>ch;
        cout<<ch<<" occurs "<<mpp[ch]<<" times"<<endl;
        j++;
        q--;
    }
    int freq;
    char alp;
    for(auto it:mpp)
    {
        if(it.second>freq)
        {
            freq=it.second;
            alp=it.first;
        }
    }
    cout<<"Element "<<alp<<" occurs the most that is "<<freq<<" times";
}

//INPUT

// aryadeeAAAAAAAAAApyyyy
// 4
// A
// a
// e
// z

//OUTPUT

// Enter your desired string
// Enter the number of queries
// Enter querie number 1
// A occurs 10 times
// Enter querie number 2
// a occurs 2 times
// Enter querie number 3
// e occurs 2 times
// Enter querie number 4
// z occurs 0 times
// Element A occurs the most that is 10 times