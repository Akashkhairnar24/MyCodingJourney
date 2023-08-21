#include<bits/stdc++.h>
using namespace std;
string conversion_prefix_to_infix(string s){
    stack<string> st;
    for(int i=s.length()-1;i>=0;i--){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        st.push(string(1,s[i]));
        else{
            string c2 = st.top();
            st.pop();
            string c1 = st.top();
            st.pop();
            st.push("("+c1+s[i]+c2+")");
        }
    }

    return st.top();
}
int main(){
    string str;
    cin>>str;
    string ans = conversion_prefix_to_infix(str);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.length();i++){
        if(ans[i]=='(')
        cout<<")";
        else if(ans[i]==')')
        cout<<'(';
        else 
        cout<<ans[i];
    }
    return 0;
}// TC = O(N) && SC = O(N)