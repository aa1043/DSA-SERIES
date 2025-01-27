#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the string"<<endl;
    string str;
    getline(cin,str);
    cout<<str<<endl;

    int hash[256]={0};
    for(int i=0;i<str.size();i++)
    {
        hash[str[i]]++;// only because whenever we Place characters in int array they implicitly results in int
    }

    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    while(q>0)
    {
        char ch;
        cin>>ch;
        cout<<ch<<" occurs "<<hash[ch]<<" times"<<endl;// only because whenever we place characters in int array they implicitly results in int
        q--;
    }
}


//INPUT

// aryadeeAAAp
// 4
// A
// a
// e
// z


//OUTPUT

// Enter the string
// aryadeeAAAp
// Enter the number of queries
// A occurs 3 times
// a occurs 2 times
// e occurs 2 times
// z occurs 0 times



// Initial hash array: hash[0] = 0, hash[1] = 0, ..., hash[255] = 0

// String: "aryadeeAAAp"

// Iteration over the string:

// i = 0: str[0] = 'a' → hash['a']++ → hash[97]++ → hash[97] = 1
// i = 1: str[1] = 'r' → hash['r']++ → hash[114]++ → hash[114] = 1
// i = 2: str[2] = 'y' → hash['y']++ → hash[121]++ → hash[121] = 1
// i = 3: str[3] = 'a' → hash['a']++ → hash[97]++ → hash[97] = 2
// i = 4: str[4] = 'd' → hash['d']++ → hash[100]++ → hash[100] = 1
// i = 5: str[5] = 'e' → hash['e']++ → hash[101]++ → hash[101] = 1
// i = 6: str[6] = 'e' → hash['e']++ → hash[101]++ → hash[101] = 2
// i = 7: str[7] = 'A' → hash['A']++ → hash[65]++ → hash[65] = 1
// i = 8: str[8] = 'A' → hash['A']++ → hash[65]++ → hash[65] = 2
// i = 9: str[9] = 'A' → hash['A']++ → hash[65]++ → hash[65] = 3
// i = 10: str[10] = 'p' → hash['p']++ → hash[112]++ → hash[112] = 1

// Hash array after processing the string:
// hash[97] = 2 ('a')
// hash[114] = 1 ('r')
// hash[121] = 1 ('y')
// hash[100] = 1 ('d')
// hash[101] = 2 ('e')
// hash[65] = 3 ('A')
// hash[112] = 1 ('p')
// hash[other indices] = 0

// Queries:

// Query 1: 'A' → hash['A'] → hash[65] = 3 → Output: "A occurs 3 times"
// Query 2: 'a' → hash['a'] → hash[97] = 2 → Output: "a occurs 2 times"
// Query 3: 'e' → hash['e'] → hash[101] = 2 → Output: "e occurs 2 times"
// Query 4: 'z' → hash['z'] → hash[122] = 0 → Output: "z occurs 0 times"