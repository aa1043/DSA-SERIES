#include<iostream>
using namespace std;
void name(int n,int sum)
{
    if(n<1)
    {
        cout<<sum;
        return;
    }
    name(n-1,sum+(n*n*n));// SAME CHAIN STARTS
}
int main()
{
    int sum=0;
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    name(n,sum);
}


//INPUT
//13

//OUTPUT
// Enter the number
// 1 13 
// The Number of factors are 2
// PRIME NUMBER


