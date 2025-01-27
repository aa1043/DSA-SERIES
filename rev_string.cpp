#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void reverse(int i,string &s)
{
    char c;
    int n=s.size();
    if(i>=n/2)
    {
        return;
    }
    c=s[i];
    s[i]=s[n-i-1];
    s[n-i-1]=c;
    reverse(i+1,s);
}
int main()
{
    cout<<"Enter the sentence"<<endl;
    string s;
    getline(cin,s);
    string copy=s;
    reverse(0,s);
        cout<<s<<endl;
        cout<<copy<<endl;
    if(s==copy)
    {
        cout<<"PALLINDROME";
    }
    else
    {
        cout<<"NOT A PALLINDROME";
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