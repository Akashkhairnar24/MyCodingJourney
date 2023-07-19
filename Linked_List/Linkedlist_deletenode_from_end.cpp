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
// Time complexity to remove node from end is O(N) & Space Complexity is O(1)
node *delete_node_fromend(node *head,int pos){
    node *fast = head;
    for(int i=1;i<=pos;i++)
    {
        fast = fast->next;
    }
    node *slow = head;
    while(fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}

int main(){
    node *head = take_input();
    print_linkedlist(head);
    // delete the nth node form back
    int pos;
    cin>>pos;
    delete_node_fromend(head,pos);
    print_linkedlist(head);
    return 0;
}