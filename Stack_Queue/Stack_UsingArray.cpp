#include<bits/stdc++.h>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top;
    public:
    Stack(){
    top = -1;
    size = 100;
    arr = new int[size];
    }
    void push(int x){
        top++;
        arr[top] = x;
    } 
    int Top(){
        return arr[top];
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Size(){
        return top+1;
    }
};
int main(){
    Stack s;
    s.push(6);
    s.push(7);
    s.push(8);
    cout<<"Size of the stack "<<s.Size()<<"\n";
    cout<<"Remove the element from stack "<<s.pop()<<"\n";
    return 0;
}
// TC = O(N) && SC = O(N)