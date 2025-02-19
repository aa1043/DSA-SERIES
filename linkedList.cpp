#include<iostream>
using namespace std;
class Node// or we can also use stuct Node or any name in place of node
{
    public: 
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1)
    {
        data=data1;
        next=next1;
    }
};
int main()
{
    vector<int> arr ={1,2,3,4,5,6,7};
    Node *y= new Node(arr[6],nullptr);
    cout<<y;//0x13e605d30
    cout<<y->next;// 7
}