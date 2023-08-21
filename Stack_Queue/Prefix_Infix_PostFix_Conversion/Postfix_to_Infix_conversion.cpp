#include<bits/stdc++.h>
using namespace std;
string ptoi_conversion(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            st.push(string(1,s[i]));
        }
        else{
            string c2 = st.top();
            st.pop();
            string c1 = st.top();
            st.pop();
            st.push("(" + c1 + s[i] + c2 + ")");
        }   
    }
    return st.top();
}
int main(){
    string str = "ab*c+";
    cout<<ptoi_conversion(str);
}
// TC = O(N) && SC = O(N)