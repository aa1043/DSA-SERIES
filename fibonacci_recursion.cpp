#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    int last=fibo(n-2);// a whole stream starts till it does not reach n<=1
    int slast=fibo(n-1);// a whole stream starts again till it does not reach n<=1
    return last+slast;
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