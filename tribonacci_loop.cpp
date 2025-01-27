#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1||n==2)
    {
        return 1;
    }
    long long a=0,b=1,c=1;
    for(int i=3;i<=n;i++)
    {
        long long temp=a+b+c;
        a=b;
        b=c;
        c=temp;
    }
    return c;
}
int main()
{
    cout<<"Enter the limit"<<endl;
    int n;
    cin>>n;
    fibo(n-1);// n-1 because indexing starts from 0
    cout<<fibo(n-1);
}

//INPUT
//20

//OUTPUT
// Enter the limit
// 35890