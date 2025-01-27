// To compile and run press cmd+shift+B

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number between 1 to 7"<<endl;
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
        {
            cout<<"Monday";
        }
        break;
        case 2:
        {
            cout<<"Tuesday";
        }
        break;

        case 3:
        {
            cout<<"Wednesday";
        }
        break;

        case 4:
        {
            cout<<"Thursday";
        }
        break;

        case 5:
        {
            cout<<"Friday";
        }
        break;
        case 6:
        {
            cout<<"Saturday";
        }
        break;
        case 7:
        {
            cout<<"Sunday";
        }
        break;
        default:
        {
            cout<<"Wrong Choice";
        }
        break;
    }
    return 0;
}

//INPUT
//4

//OUTPUT
// Enter a number between 1 to 7
// Thursday