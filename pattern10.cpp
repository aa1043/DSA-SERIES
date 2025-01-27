#include <iostream>
using namespace std;

// Function to print the reverse pyramid pattern
void pattern2(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern1(int a) 
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*a)-(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    cout << "Enter the number of test cases: "<<endl;
    int t;
    cin >> t;

    for (int k = 0; k < t; k++) {
        cout << "Enter the number of rows: "<<endl;
        int a;
        cin >> a;
        pattern2(a);
        pattern1(a);
    }

    return 0;
}


     //INPUT

 //2
 //4
 //5

 //OUTPUT

//  Enter the number of test cases: 
// Enter the number of rows: 
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
// Enter the number of rows: 
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
