#include<iostream>
#include<string>
using namespace std;
void revloop(int n,int i)
{
    if(i>n)
    {
        return;
    }
    revloop(n,i+1);//chain starts and atlast when i>n then starts printing one by one
    cout<<i<<endl;
}
int main()
{
    int i=1;
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    revloop(n,i);
}

// INPUT
//5

//OUTPUT
//Enter the number 
// 5
// 4
// 3
// 2
// 1