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
node *sort_linkedlist(node *head){
    vector<int> v;
    node *temp = head;
    while(temp!=nullptr){
        v.push_back(temp->data);
        temp = temp->next;
    }
    sort(v.begin(),v.end());
    node *tail = nullptr;
    node *newhead = nullptr;
    for(int i=0;i<v.size();i++)
    {
        node *newnode = new node(v[i]);
        if(newhead==nullptr){
            newhead = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    return newhead;
}

int main(){
    node *head = take_input();
    print_linkedlist(head);
    cout<<"\n";
    head = sort_linkedlist(head);
    print_linkedlist(head);
    return 0;
}