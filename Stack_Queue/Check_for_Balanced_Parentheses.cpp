#include<bits/stdc++.h>
using namespace std;
bool checkparenthesis(string str){
    stack<int> st;
    for(int i=0;i<str.length();i++){
        if(st.empty())
        st.push(str[i]);
        else{
            if((st.top()=='(' && str[i]==')') || (st.top()=='[' && str[i]==']') || (st.top()=='{' && str[i]=='}'))
            st.pop();
            else
            st.push(str[i]);
        }
    }
    if(st.empty())
    return true;
    else
    return false;
}
// TC = O(N) && SC = O(N)
int main(){
    string str;
    cin>>str;
    cout<<checkparenthesis(str)<<"\n";
}