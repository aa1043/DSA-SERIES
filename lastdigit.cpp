#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    int i=0;
    while(n>0)
    {
        i++;
        int last=n%10;
        n=n/10;
        cout<<"Digit Number "<<i<<" is : "<<last<<endl;
    }
    cout<<"Total number of digits present : "<<i;
    return 0;
}