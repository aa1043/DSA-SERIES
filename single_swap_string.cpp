#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    cout << "Enter your first word: "<<endl;
    string s1;
    getline(cin, s1);
    cout<<"Your first word is"<<endl;
    cout<<s1<<endl;
    cout << "Enter your second word: "<<endl;
    string s2;
    getline(cin, s2);
    cout<<"Your second word is"<<endl;
    cout<<s2<<endl;
    if (s1 == s2) 
    {
        cout << "It is possible"<<endl;  // Already equal
        return 0;
    }

    vector<int> v;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            v.emplace_back(i);
        }
    }

    bool a = false;
    if (v.size() == 2) {
        swap(s1[v[0]], s1[v[1]]);  // Fix: swap within s1
        a = (s1 == s2);// bitwise check 1 if tue 0 if false
    }

    if (a==1) 
    {
        cout << "It is possible by changing the elements occuring in pos "<<v[0]+1<<" and "<<v[1]+1 <<endl;
    } 
    else 
    {
        cout << "It is not possible"<<endl;
    }

    return 0;
}
