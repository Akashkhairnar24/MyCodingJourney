#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c=='^')
    return 3;
    if(c=='*' || c=='/')
    return 2;
    if(c=='+' || c=='-')
    return 1;
    return -1;
}
void conversion(string s){
    stack<char>st;
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        res+=s[i];
        else if(s[i]=='(')
        st.push('(');
        else if(s[i]==')'){
            while(st.top()!='('){
            res+=st.top();
            st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}
int main(){
    string str;
    cin>>str;
    conversion(str);
    return 0;
}