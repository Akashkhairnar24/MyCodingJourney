#include<bits/stdc++.h>
using namespace std;
int getdigitsum(int n)
{
    int sum1=0;
    int temp = n;
    while(temp!=0)
    {
        int digit = temp%10;
        sum1+=digit;
        temp /=10;
    }
    return sum1;
}
int main()
{
    string str;
    cin>>str;
    string s = "";
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            s +=str[i];
        }
    }
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        sum+=(s[i]-'a'+1);
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        sum+=(s[i]-'A'+1);
    }
    while(sum>9){
        sum = getdigitsum(sum);
    }
    cout<<sum<<"\n";
    return 0;
}