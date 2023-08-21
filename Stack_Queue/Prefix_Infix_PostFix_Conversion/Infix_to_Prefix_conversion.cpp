#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c == '^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}
string conversion_infix_to_postfix(string s){
    string res;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        st.push('(');
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top())>=prec(s[i])){
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
    return res;
}
int main(){
    string str = "(a-b/c)*(a/k-l)";
    // infix to prefix
    // first reverse the string and then do infix to postfix karenge then reverse the ans 
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        if(str[i]=='(')
        str[i] = ')';
        else if(str[i]==')')
        str[i] = '(';
    }
    string ans = conversion_infix_to_postfix(str);
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    return 0;
}
// TC = O(N) && SC = O(N)