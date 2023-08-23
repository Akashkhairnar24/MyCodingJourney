#include<bits/stdc++.h>
using namespace std;
vector<int> output(vector<int> &v,int n){
    vector<int> res(n,-1);
    stack<int> st;
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=v[i%n]){
            st.pop();
        }
        if(i<n){
            if(!st.empty())
            res[i] = st.top();
        }
        st.push(v[i%n]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans = output(v,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}
// TC = O(N) SC = O(N)
/*
0  1  2  3  4  5  6  7  8  9  10  11
5  7  1  2  6  0  5  7  1  2  6   0 
7 -1 2  6  7  5
*/
