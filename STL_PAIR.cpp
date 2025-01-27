#include<iostream>
using namespace std;
int main()
{

    cout<<"STL  PAIR"<<endl;
    pair<int,int>p={3,5};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int> arr[]={{2,3},{4,5}};
    cout<<arr[1].second<<endl;
    pair<int ,pair<int,int>> pa ={1,{3,5}};
    cout<<pa.second.first;
    return 0;
}