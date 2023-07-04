#include<bits/stdc++.h>
using namespace std;
int upper_bound_bs(vector<int>&v,int n,int target)
{
    int low=0,high=n-1,ans;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]>target)
        {
            ans=mid;
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
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
    int target;
    cin>>target;
    cout<<upper_bound_bs(v,n,target);
}


// Time complexity => O(logN)
// Space Complexity => O(1)
