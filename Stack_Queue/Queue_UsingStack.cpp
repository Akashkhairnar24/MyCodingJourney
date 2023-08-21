#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> input,output;
    public:
    void Push(int x){
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        input.push(x);
        while (!output.empty())
        {
            input.push(output.top());
            output.pop();
        }       
    }
    int Pop(){
        int ans = input.top();
        input.pop();
        return ans;
    }
    int Top(){
        return input.top();
    }
    int Size(){
        return input.size();
    }
};
int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    cout<<"The element pop is "<<q.Pop()<<"\n";
    q.Push(4);
    cout<<"The size of queue is "<<q.Size()<<"\n";
    cout<<"The top of queue is "<<q.Top()<<"\n";
    return 0;
}
// TC = O(N) && SC = O(2N)