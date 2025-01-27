#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool rev(int i,string &s)
{
    int n=s.size();
    if(i>=n/2)
    {
        return true;
    }
    
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return rev(i+1,s);
}
int main()
{
    cout<<"Enter the sentence"<<endl;
    string s;
    getline(cin,s);
    rev(0,s);
    if(rev(0,s)==1)
    {
        cout<<"PALLINDROME";
    }
    else
    {
        cout<<"NOT PALLINDROME";
    }
}

//INPUT

// Aryadeep

//OUTPUT

// Enter the sentence
// peedayrA
// Aryadeep
// NOT A PALLINDROME


//INPUT

// HAHAH

//OUTPUT

// Enter the sentence
// HAHAH
// HAHAH
// PALLINDROME