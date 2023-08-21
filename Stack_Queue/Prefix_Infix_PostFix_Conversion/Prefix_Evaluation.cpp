#include<bits/stdc++.h>
using namespace std;
int preEval(string str){
    stack<int> st;
    int ans=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            if(str[i]=='+')
            ans = op1+op2;
            if(str[i]=='-')
            ans = op1-op2;
            if(str[i]=='/')
            ans = op1/op2;
            if(str[i]=='*')
            ans = op1*op2;
            if(str[i]=='^')
            ans = op1^op2;
            st.push(ans);
        }
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<preEval(str)<<"\n";
}
// TC = O(N) && SC = O(N)