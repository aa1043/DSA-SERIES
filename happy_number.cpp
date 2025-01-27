#include<iostream>
using namespace std;
int main()
{
    cout<<"Please Enter a number"<<endl;
    int n;
    cin>>n;
    while(n!=1&&n!=4)// n!4 becaule 4 starts an cycle
    {
        int temp=n;// Keeping a copy of n as we recalculate it 
        n=0;//re initialising it to s to store he new result;
        while(temp>0)
        {
            int l=temp%10;
            temp=temp/10;
            n=n+(l*l);// recalculating it 
        }
    }
    if(n==1)
    {
        cout<<"Happy Number";
    }
    else{
        cout<<"Not a happy number";
    }
}