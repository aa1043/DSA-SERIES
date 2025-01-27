 #include<iostream>
 using namespace std;
 int pattern(int a)
 {
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=0;j<2*a-(2*(i));j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<" "<<endl;
    }
 }
 int main()
 {
    cout<<"Enter the number of test cases"<<endl;
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    cout<<"Enter the number of rows"<<endl;
    int a;
    cin>>a; 
    pattern(a);
    }
 }

      //INPUT

 //2
 //4
 //5

 //OUTPUT

//  Enter the number of test cases
// Enter the number of rows
// 1      1 
// 12    21 
// 123  321 
// 12344321 
// Enter the number of rows
// 1        1 
// 12      21 
// 123    321 
// 1234  4321 
// 1234554321 