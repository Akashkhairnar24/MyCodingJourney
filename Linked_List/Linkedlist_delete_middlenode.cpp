#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;   
    node *next;
    node(int data)
    {
        this->data=data;
        next = nullptr;
    }
};
node *take_input(){
    int data;
    cin>>data;
    node *head = nullptr;
    node *tail = nullptr;
    while(data!=-1){
        node *newnode = new node(data);
        if(head==nullptr){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        cin>>data;
    }
    return head;
}
void print_linkedlist(node *head){
    node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node *deletemiddle_linkedlist(node *head){
    node *slow = head, *fast = head;
    node *temp = nullptr;
    while(fast && fast->next)
    {
        if(temp==nullptr)
        temp = head;
        else
        temp = temp->next;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    return head;
}
int main(){
    node *head = take_input();
    print_linkedlist(head);
    deletemiddle_linkedlist(head);
    cout<<"\n";
    print_linkedlist(head);
}