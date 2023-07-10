#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(10);
    for(int i=0;i<10;i++)
    {
        cin>>v[i];
    }
    string str = to_string(n);
    for(int i=0;i<str.length();i++){
        if(v[str[i]]>(str[i]-'0'))
        cout<<v[str[i]-'0'];
        else
        cout<<str[i];
    }
    return 0;
}