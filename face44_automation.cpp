#include<bits/stdc++.h>
using namespace std;
int min_no_of_doors(vector<int> &v,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        count++;
    }
    if(count==0)
    return 0;
    else if(count==1)
    {
        if(v[0]==0 || v[n-1]==0)
        return 1;
        else return 2;
    }
    else
    return count+1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<min_no_of_doors(v,n);
}