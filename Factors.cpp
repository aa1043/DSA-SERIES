#include<iostream>
#include<math.h>
using namespace std;
int factors(int n)
{
    int j=0;
    int sum=0;
    cout<<"The factors are"<<endl;
     for(int i=0;i<=n;i++)
        {
            if((n%i)==0)
            {
                cout<<i<<" ";
                j++;
                sum=sum+i;
            }
        }
        cout<<endl;
        cout<<"The Number of factors are "<<j<<endl;
        cout<<"Sum of the factors is "<<sum;
    return 0;
}
int main()
{
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    factors(n);
    return 0;
}