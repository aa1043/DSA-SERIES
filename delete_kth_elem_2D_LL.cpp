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
Node* deletetail(Node* head)
{
    if(head==NULL)
    {
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next)
    {
        temp=temp->next;
    }
    temp->next->back=nullptr;
    temp->next=nullptr;
    delete temp->next;
    return head;
}
Node* deletehead(Node* head)
{
    Node* temp=head;
    head=temp->next;
    head->back=nullptr;
    delete temp;
    return head;
}
Node* deletenode(Node* head,int k)
{
    int count=0;
    Node* temp=head;
    while(temp)
    {
        count++;
        if(count==k)
        {
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL)
    {
        return deletehead(temp);
    }
    else if(front==NULL)
    {
        return deletetail(temp);
    }
    else if(prev==NULL&&front==NULL)
    {
        delete temp;
        return NULL;
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
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
    temp=deletenode(head,3);
    cout<<endl<<"After deletion"<<endl;
    print(temp);
}

// OUTPUT

// 12
// 12 4 5 1 7 8 9 
// After deletion
// 12 4 1 7 8 9 