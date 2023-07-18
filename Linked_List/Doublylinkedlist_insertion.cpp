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
// insert node in doubly linked list
node *insert_node(node *head,int insert_ele,int pos)
{
    node *temp = head;
    node *newnode = new node(insert_ele);
    if(pos==0)
    {
        head = newnode;
        newnode->prev = head;
        newnode->next = temp;
        return head;
    }
    int cnt=1;
    while (cnt!=pos)
    {
        cnt++;
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    return head;
}
int main(){
    node *head = take_input();
    print_doublylinkedlist(head);
    int insert_ele;
    cin>>insert_ele;
    int pos;
    cin>>pos;
    head = insert_node(head,insert_ele,pos);
    print_doublylinkedlist(head);
    return 0;
}