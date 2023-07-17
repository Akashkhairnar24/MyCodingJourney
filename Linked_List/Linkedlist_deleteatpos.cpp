#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
node *take_input(){
    int data;
    cin>>data;
    node *head = nullptr;
    node *tail = nullptr;
    while(data!=-1){
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
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node *delete_atpos(node *head,int deletepos)
{
    int count=1;
    node *temp = head;
    while(count!=deletepos-1)
    {
        count++;
        temp=temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

int main(){
    node *head = take_input();
    print_linkedlist(head);
    int deletepos;
    cin>>deletepos;
    head = delete_atpos(head,deletepos);
    print_linkedlist(head);
}