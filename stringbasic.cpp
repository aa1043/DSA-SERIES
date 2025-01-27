#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter Your String"<<endl;
    string s;
    getline(cin,s);
    cout<<"Your Original sring is : "<<endl;
    cout<<s<<endl;
    cout<<"If you want to update your String press Y or Press N "<<endl;
    char choice;
    cin>>choice;
    if(choice == 'Y')
    {
        cout<<"Enter the position you want to Modify "<<endl;
        int a;
        cin>>a;
        cout<<"Enter the alphabet you want to put in that place "<<endl;
        char c;
        cin>>c;
        s[a-1]=c;
        cout<<"Your resultant String is "<<endl;
        cout<<s;
    }
    else
    {
        cout<<"Your resultant String is"<<endl;
        cout<<s;
    }
    return 0;
}

//INPUT
// ARYADEEP
// Y
// 1
// B

//OUTPUT

// Enter Your String
// Your Original sring is : 
// ARYADEEP
// If you want to update your String press Y or Press N 
// Enter the position you want to Modify 
// Enter the alphabet you want to put in that place 
// Your resultant String is 
// BRYADEEP