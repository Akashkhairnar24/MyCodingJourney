#include<bits/stdc++.h>
using namespace std;
int posteval(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9')
        st.push(s[i]-'0');
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            if(s[i]=='+')
            st.push(op1+op2);
            if(s[i]=='-')
            st.push(op1-op2);
            if(s[i]=='/')
            st.push(op1/op2);
            if(s[i]=='*')
            st.push(op1*op2);
            if(s[i]=='^')
            st.push(pow(op1,op2));
        }
    }
    return st.top();
}
int main(){
    string str;
    cin>>str;
    cout<<posteval(str);
}
// TC = O(N) && SC = O(N)