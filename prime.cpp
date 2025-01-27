#include<iostream>
#include<math.h>
using namespace std;
int factors(int n)
{
    int j=0;;
     for(int i=0;i<=n;i++)
        {
            if((n%i)==0)
            { 
                cout<<i<<" ";
                j++;
            }
        }
        cout<<endl;
        cout<<"The Number of factors are "<<j<<endl;
        if(j==2)
        {
            cout<<"PRIME NUMBER"<<endl;
        }
        else{
            cout<<"NOT A PRIME";
        }
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


// INPUT
//13

//OUTPUT
//Enter the number
// 1 13 
// The Number of factors are 2
// PRIME NUMBER
