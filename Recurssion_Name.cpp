#include<iostream>
#include<string>
using namespace std;
void name(int n, string s,int i)
{
    if(i>n)
    {
        return ;
    }
    
    cout<<i<<" "<<s<<endl;
    i++;
    name(n,s,i);
}
int main()
{
    int i=1;
    cout<<"Enter the name"<<endl;
    string s;
    getline(cin,s);
    cout<<"Enter the number of times you want to print the name"<<endl;
    int n;
    cin>>n;
    name(n,s,i);
}


//INPUT

// Aryadeep Das
// 5

//OUTPUT

// Enter the name
// Enter the number of times you want to print the name
// 1 Aryadeep Das
// 2 Aryadeep Das
// 3 Aryadeep Das
// 4 Aryadeep Das
// 5 Aryadeep Das
