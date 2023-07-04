#include<bits/stdc++.h>
using namespace std;
// floor = greatest element which is smaller or equal to target   floor<=target
int floor_binarysearch(vector<int> &v,int n,int target)
{
    int low=0,high=n-1,mid,floor;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]<=target)
        {
            floor = v[mid];
            low  = mid+1;
        }
        else
        high = mid-1;
    }
    return floor;
}
// ceil = smallest element which is greater or equal to target  ceil>=target
int ceil_binarysearch(vector<int> &v,int n,int target)
{
    int low=0,high=n-1,mid,ceil;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]>=target)
        {
            ceil = v[mid];
            high = mid-1;
        }
        else
        low = mid+1;

    }
    return ceil; 
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
    cout<<floor_binarysearch(v,n,target)<<"\n";
    cout<<ceil_binarysearch(v,n,target)<<"\n";
    return 0;
}


// TC => O(logN)
// SC => O(1)