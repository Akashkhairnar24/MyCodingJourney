#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
    /* node(int data)
    {
        this->data=data;
        next=nullptr;
    }*/
};
void print_linkedlist(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
int length_linkedlist(node *head){
    int count=0;
    node *temp1 = head;
    while(temp1!=nullptr)
    {
        count++;
        temp1 = temp1->next;
    }
    return count;
}
int main(){
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    node n6(6);
    node n7(7);
    /* dynimically 
    node *n8 = new node(8);
    node *n9 = new node(9);
    */
    node *head = &n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=&n6;
    n6.next=&n7;
    /*n7->next=n8;
    n8->next=n9;
    */
    print_linkedlist(head);
    cout<<"\n";
    cout<<length_linkedlist(head)<<"\n";
    return 0;
}