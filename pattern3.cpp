 #include<iostream>
 using namespace std;
 int pattern(int a)
 {
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" "<<j+1;
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
 
// Enter the number of test cases
// Enter the number of rows
//  1 
//  1 2 
//  1 2 3 
//  1 2 3 4 
// Enter the number of rows
//  1 
//  1 2 
//  1 2 3 
//  1 2 3 4 
//  1 2 3 4 5 
