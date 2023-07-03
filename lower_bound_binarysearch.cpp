#include<bits/stdc++.h>
using namespace std;
int lowerbound1(vector<int> &v,int n)
{
    int low=0,high=n-1;
    int target;
    cin>>target;
    int ans;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(v[mid]>=target)
        {
            ans = mid;
            high = mid-1;
        }else
        low = mid+1;
    }
    return ans;
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
    cout<<lowerbound1(v,n)<<"\n";
    return 0;
}