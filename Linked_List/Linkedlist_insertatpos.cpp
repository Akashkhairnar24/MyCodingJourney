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
node *insert_atpos(node *head,int insert,int pos){
    int count=1;
    node *temp1 = head;
    while(count!=pos-1)
    {
        count++;
        temp1 = temp1->next;
    }
    node *newnode = new node(insert);
    newnode->next = temp1->next;
    temp1->next = newnode;
    return head;
}

int main(){
    node *head = take_input();
    print_linkedlist(head);
    int insert,pos;
    cin>>insert>>pos;
    cout<<"Linked list after insert\n";
    head = insert_atpos(head,insert,pos);
    print_linkedlist(head);
}