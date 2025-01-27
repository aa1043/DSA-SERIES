#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int n)
{
    int last=0;
    long long armstrong=0;
    long long copy=n;
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;// counts the number of digits 
    }
    int sec=copy;
    while(copy>0)
    {
        int l=copy%10;
        copy=copy/10;
        armstrong=armstrong+pow(l,i);
    }
       cout<<sec;
    if(armstrong==sec)
    {
        cout<<" is an Armstrong Number as it is same as "<<armstrong<<endl;
    }
    else{
        cout<<" is not an Armstrong Number as it is not same as "<<armstrong<<endl;
    }
    return 0;
};
int main()
{
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    armstrong(n);
    return 0;
}

//INPUT
//371

//OUTPUT
// Enter the number
// 371 is an Armstrong Number as it is same as 371

//INPUT
//1634

//OUTPUT
// Enter the number
//1634 is an Armstrong Number as it is same as 1634
