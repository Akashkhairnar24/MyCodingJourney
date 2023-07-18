#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
node *take_input()
{
    int data;
    cin>>data;
    node *prev = nullptr;
    node *next = nullptr;
    node *head = nullptr;
    node *tail = nullptr;
    while(data!=-1){
        node *newnode = new node(data);
        if(head==nullptr)
        {
            head = newnode;
            newnode->prev = head;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        cin>>data;
    }
    return head;

}
void print_doublylinkedlist(node *head){
    node *temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
// delete node in doubly linked list
node *delete_node(node *head,int pos)
{
    node *temp = head;
    if(pos==1)
    {
        return head->next;
    }
    int cnt=1;
    while(cnt!=pos-1)
    {
        cnt++;
        temp = temp->next;
    }
    temp->next->next->prev = temp;
    temp->next = temp->next->next;
    return head;

}
int main(){
    node *head = take_input();
    print_doublylinkedlist(head);
    int pos;
    cin>>pos;
    head = delete_node(head,pos);
    print_doublylinkedlist(head);
    
    return 0;
}