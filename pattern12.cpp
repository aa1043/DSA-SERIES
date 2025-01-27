 #include<iostream>
 using namespace std;
 int pattern(int a)
 {
    int start=1;
    for(int i=0;i<a;i++)
    {
        if((i%2)==0)
        {
            start=1;
        }
        else
        {
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
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
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// Enter the number of rows
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 