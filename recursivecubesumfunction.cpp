#include<iostream>
using namespace std;
int name(int n)
{
    if(n<1)
    {
        return 0;
    }
    return (n*n*n*n)+name(n-1);// CHAIN STARTS UNTIL N<1 THEN COMES BACK
}
int main()
{
    
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    name(n);
    cout<<name(n);
}
//INPUT
//13

//OUTPUT
// Enter the number
// 1 13 
// The Number of factors are 2
// PRIME NUMBER
