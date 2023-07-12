#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string s = "";
    for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++)
        {
            if(str1[i]==str2[j])
            s +=str1[i];
        }
    }
    sort(s.begin(),s.end());
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto itr:mp)
    {
        cout<<itr.first;
    }
    return 0;
}