#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=nullptr;

    }
};
node *takeinput(){
    int data;
    cin>>data;
    node *head = nullptr;
    node *tail = nullptr;
    while(data!=-1)
    {
        node *newnode = new node(data);
        if(head==nullptr)
        {
            newnode->data = data;
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin>>data;
    }
    return head;
}
void print_linkedlist(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
int main()
{
    node *head = takeinput();   
    print_linkedlist(head);
}