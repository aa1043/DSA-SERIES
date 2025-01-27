 #include<iostream>
 using namespace std;
 int pattern(int a)
 {
    for(int i=a;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
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
//  1 2 3 4 
//  1 2 3 
//  1 2 
//  1 
// Enter the number of rows
//  1 2 3 4 5 
//  1 2 3 4 
//  1 2 3 
//  1 2 
//  1 