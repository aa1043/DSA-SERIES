#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* convert2LL(vector<int>&v)
{
    Node* head=new Node(v[0]);
    Node* mover=head;
    for(int i=1;i<v.size();i++)
    {
        Node* temp=new Node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* addhead(Node* head,int val)
{
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
}
int main()
{
    vector<int>v={12,4,5,1,7,8,9};
    Node* head=convert2LL(v);
    print(head);
    head=addhead(head,7);
    cout<<endl;
    print(head);
}

// OUTPUT

// 12 4 5 1 7 8 9 
// 7 12 4 5 1 7 8 9 