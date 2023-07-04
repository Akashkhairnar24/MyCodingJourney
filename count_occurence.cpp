#include<bits/stdc++.h>
using namespace std;
int first_occurence(vector<int> &v,int n,int target)
{
    int low=0,high=n-1,mid,mini=INT_MAX;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]==target)  
        {
            if(mid<mini)
            mini = mid;
            high = mid-1;
        }
        else if(target>v[mid])
        {
            low = mid+1;
        }
        else
        high = mid-1;
    }
    return mini;
}
int last_occurence(vector<int> &v,int n,int target)
{
    int low=0,high=n-1,mid,maxi=INT_MIN;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]==target)
        {
            if(mid>maxi)
            maxi = mid;
            low = mid+1;
        }
        else if(v[mid]<target)
        low = mid+1;
        else
        high = mid-1;
    }
    return maxi;
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
    cout<<last_occurence(v,n,target)-first_occurence(v,n,target)+1<<"\n";
    return 0;
}

// TC => O(logN)
// SC => O(1)   