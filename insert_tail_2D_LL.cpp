#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertToDoublyLinkedList(vector<int>&v)
{
    if (v.empty()) 
    {
        return nullptr;
    }
    Node* head=new Node(v[0]);
    Node* prev=head;
    for(int i=1;i<v.size();i++)
    {
        Node* temp=new Node(v[i]);
        temp->back=prev;
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* inserttail(Node* head,int val)
{
    Node* newelem=new Node(val);
    Node* temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=newelem;
    newelem->back=temp;
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
int main()
{
    vector<int>v={12,4,5,1,7,8,9};
    Node* head=convertToDoublyLinkedList(v);
    cout<<head->data;
    cout<<endl;
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";// 12 
        temp=temp->next;// 12 4 5 1 7 8 9 
    }
    temp=inserttail(head,89);
    cout<<endl<<"After insertion"<<endl;
    print(temp);
}

// OUTPUT

// 12
// 12 4 5 1 7 8 9 
// After insertion
// 12 4 5 1 7 8 9 89 