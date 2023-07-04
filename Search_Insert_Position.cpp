#include<bits/stdc++.h>
using namespace std;
int search_insert_pos(vector<int> &v,int n,int target)
{
    int low=0,high=n-1,ans;
    //Base cases
    if(v[n-1]<target)  // target greater than last element insert at last
    return n;
    if(v[0]>target)    // target smaller than first element insert at first
    return 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]>=target)
        {
            ans = mid;
            high = mid-1;
        }
        else
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
    int target;
    cin>>target;
    cout<<search_insert_pos(v,n,target);
}

// TC =>  O(logN)
// SC =>  O(1)