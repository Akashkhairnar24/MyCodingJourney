#include<bits/stdc++.h>
using namespace std;
string conversion_postfix_to_prefix(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        st.push(string(1,s[i]));
        else{
            string c2 = st.top();
            st.pop();
            string c1 = st.top();
            st.pop();
            st.push(s[i]+c1+c2);
        }
    }
    return st.top();
}
int main(){
    // postfix to prefix conversion 
    string str = "AB+CD-*" ;
    cout<<conversion_postfix_to_prefix(str);
    return 0;
}
// TC = O(N) SC = O(N)
