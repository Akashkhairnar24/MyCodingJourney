#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q;
    public:
    void Push(int x){
        int s = q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int Pop(){
        int n = q.front();
        q.pop();
        return n;
    }
    int Top(){
        return q.front();
    }
    int Size(){
        return q.size();
    }
};
int main(){
    Stack s;
    s.Push(3);
    s.Push(4);
    s.Push(5);
    s.Push(6);
    cout<<"Top of the stack is "<<s.Top()<<"\n";
    cout<<"Size of the stack is "<<s.Size()<<"\n";
    cout<<"The deleted element is "<<s.Pop()<<"\n";
    cout<<"Top of the stack after deleting is "<<s.Top()<<"\n";
    cout<<"Size of the stack after deleting is "<<s.Size()<<"\n";
    return 0;
}
// TC = O(N) && SC = O(N)