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
bool search_node(node *head,int target){
    node *temp = head;
    while(temp!=nullptr)
    {
        if(temp->data==target)
        return true;
        else
        temp = temp->next;
    }
    return false;
}


int main(){
    node *head = take_input();
    print_linkedlist(head);
    int target;
    cin>>target;
    cout<<search_node(head,target)<<"\n";
    return 0;
}