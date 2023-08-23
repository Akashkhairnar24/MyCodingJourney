#include<bits/stdc++.h>
using namespace std;
vector<int> find_ans(vector<int> &v,int n){
    vector<int> ans(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=v[i])
        st.pop();
        if(st.empty()){
            ans[i] = -1;
        }
        else if(st.top()<v[i])
        ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main(){
    // next smaller element to left
    // input : 4 5 2 10 8
    // output: -1 4 -1 2 2  
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> out = find_ans(v,n);
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    return 0;
}