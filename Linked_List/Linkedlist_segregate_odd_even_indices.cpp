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
node *odd_even_together(node *head){
    node *temp = head;
    node *curr = head;
    node *save = head;
    node *tail = nullptr;
    node *evenhead =nullptr;
    int cnt = 0;
    int c = 1;
    while(temp!=nullptr){
        if(c%2!=0)
        {
            cnt++;
            if(cnt==1)
            {
                curr = temp;
                head = temp;
                temp = temp->next;
            }
            else
            {
                curr->next = temp;
                curr = temp;
                temp = temp->next;
            }
        }
        else
        {
            node *newnode = new node(temp->data);
            if(evenhead==nullptr)
            {
                evenhead = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
            temp = temp->next;
        }
        c++;
    }
    curr->next = evenhead;
    return head;
}

int main(){
    node *head = take_input();
    print_linkedlist(head);
    cout<<"\n";
    // odd-even together 
    node *newhead = odd_even_together(head);
    print_linkedlist(newhead);
    return 0;
}