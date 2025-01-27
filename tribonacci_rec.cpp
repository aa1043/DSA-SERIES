#include<iostream>
using namespace std;
int tribo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1||n==2)
    {
        return 1;
    }
    int tlast=tribo(n-1);
    int slast=tribo(n-2);
    int last=tribo(n-3);
    return last+slast+tlast;
}
int main()
{
    cout<<"Enter the limit"<<endl;
    int n;
    cin>>n;
    tribo(n-1);// n-1 cause indexing starts from 0
    cout<<tribo(n-1);
}

//INPUT
//20

//OUTPUT
// Enter the limit
// 35890