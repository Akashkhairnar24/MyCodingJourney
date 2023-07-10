#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int pro = 1;
    for(int i=n;i>=1;i--)
    {
        pro*=i;
    }
    return pro;
}
int main()
{
    int p,e,np,ne;
    cin>>p>>e>>np>>ne;
    int ans1 = fact(p)/(fact(np)*fact(p-np));
    int ans2 = fact(e)/(fact(ne)*fact(e-ne));
    cout<<ans1*ans2<<"\n";
    return 0;
}