#include<iostream>
#include<math.h>
using namespace std;

//         NORMAL BRUTE FORCE

// int gcd(int n,int m)
// {
//     for(int i=min(n,m);i>=1;i--)
//     {
//         if((n%i)==0&&(m%i)==0)
//         {
//             int gcd=i;
//              cout<<gcd;
//              break;
//         }
       
//     }
    
//     return 0;
// }

//      EUCLIEODIAN METHOD
// IT IS LIKE (A,B)=(A%B,B)// IF A IS BIGGER AND ONCE ONE OF THE EITHER BECOMES 0 THE OTHER IS THE GCD
int gcd(int n,int m)
{
    int cp1=m;// JUST FOR PRINTING NO NEED
    int cp2=n;// JUST FOR PRINTING NO NEED
    int gcd=0;
    while(m>0&&n>0)
    {
        if(m>n)
        {
            m=m%n;
        }
        else{
            n=n%m;
        }
    }
    if(m==0)
    {
        gcd=n;
    }
    else
    {
        gcd=m;
    }
    cout<<"The GCD of "<<cp1<<" and "<<cp2<<" is "<<gcd;
}
int main()
{
    cout<<"Enter two number"<<endl;
    int n;
    cin>>n;
    int m;
    cin>>m;
    gcd(n,m);
    return 0;
}


//OUTPUT

// Enter two number
// 8
// 16
// The GCD of 16 and 8 is 8
