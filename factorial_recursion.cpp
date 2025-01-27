#include<iostream>
using namespace std;        
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);//CHAIN STARTS UNTIL N==1 THEN IT COMES BACK ONE BY ONE
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    cout<<factorial(n);
}

//INPUT
//7

//OUTPUT
//5040