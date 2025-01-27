 #include<iostream>
 using namespace std;
 int pattern(int a)
 {
    int num;
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<num<<" ";
            num=num+1;
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
// 2  
// 3 4  
// 5 6 7  
// 8 9 10 11  
// Enter the number of rows
// 2  
// 3 4  
// 5 6 7  
// 8 9 10 11  
// 12 13 14 15 16  
