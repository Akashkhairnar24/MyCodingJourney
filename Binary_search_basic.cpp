#include<bits/stdc++.h>
using namespace std;
bool binary_search_iterative(vector<int> &v,int n,int target)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(target==v[mid])
        return true;
        else if(target>v[mid])
        low = mid+1;
        else 
        high = mid-1;
    }
    return false;
}
bool binary_search_recursive(vector<int> &v,int n,int target,int low1,int high1)
{
    if(low1>high1)
    return false;
    int middle = (low1+high1)/2;
    if(target==v[middle])
    return true;
    else if(target>v[middle])
    binary_search_recursive(v,n,target,middle+1,high1);
    else
    binary_search_recursive(v,n,target,low1,middle-1);
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
    int target;
    cin>>target;
    //cout<<binary_search_iterative(v,n,target)<<"\n";
    int low1=0,high1=n-1;
    cout<<binary_search_recursive(v,n,target,low1,high1)<<"\n";
    return 0;
}