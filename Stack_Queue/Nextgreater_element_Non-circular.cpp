#include<bits/stdc++.h>
using namespace std;
vector<int> find_next_greater(vector<int> &v,int n){
    stack<int> st;
    vector<int> res(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=v[i]){
            st.pop();
        }
        if(st.empty()){
            res[i] = -1;
        }else{
            res[i] = st.top();
        }
        st.push(v[i]);
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
    // Next greater element when array is not circular
    vector<int> ans = find_next_greater(v,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}
/*
3   10  4  2  1  2  6  1  7  2  9
10  -1  6  6  2  6  7  7  9  9  -1
*/
