#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    int temp=0;
    int a=0,b=1;
    for(int i=2;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
   
    return b;
}
int main()
{
    cout<<"Enter the limit"<<endl;
    int n;
    cin>>n;
    fibo(n);
    cout<<"The "<<n<<"th fibonacci number is "<<fibo(n);
}
//INPUT
//8

//OUTPUT

// Enter the limit
// The 8th fibonacci number is 21