#include<bits/stdc++.h>
using namespace std;
class Stack{
    stack<pair<int,int>> st;
    public:
    void Push(int x){
        int mini;
        if(st.empty())
        mini = x;
        else
        mini = min(st.top().second,x);
        st.push({x,mini});
    }
    void Pop(){
        st.pop();
    }
    int Top(){
        return st.top().first;
    }
    int getmin(){
        return st.top().second;
    }
};
int main(){
    Stack st;
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    } 
    vector<string> output(n);
    for(int i=0;i<n;i++){
        if(v[i]=="MinStack")
        {
            output[i] = "NULL";
        }
        if(v[i]=="push")
        {
            st.Push(input[i]);
            output[i] = "NULL";
        }
        if(v[i]=="getmin"){
            int g = st.getmin();
            output[i] = to_string(g);
        }
        if(v[i]=="top"){
            int t = st.Top();
            output[i] = to_string(t);
        }
        if(v[i]=="Pop"){
            st.Pop();
            output[i] = "NULL";
        }
    }
    for(int i=0;i<n;i++)
    cout<<output[i]<<" ";
    return 0;
}