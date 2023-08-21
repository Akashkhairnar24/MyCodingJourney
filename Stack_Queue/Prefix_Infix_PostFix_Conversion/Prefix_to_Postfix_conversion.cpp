#include<bits/stdc++.h>
using namespace std;
string conversion_prefix_to_postfix(string s){
    stack<string> st;
    for(int i=s.length()-1;i>=0;i--){
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
    reverse(st.top().begin(),st.top().end());
    return st.top();
}
int main(){
    /* prefix to postfix conversion
    note1 = Convert the given string from Prefix to infix 
    then convert the infix string to postfix, thats the ans */
    string str = "*+AB-CD" ;
    cout<<conversion_prefix_to_postfix(str);
    return 0;
}

// TC = O(N) SC = O(N)