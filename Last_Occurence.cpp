#include<bits/stdc++.h>
using namespace std;
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
        else if(target>v[mid])
        {
            low = mid+1;
        }
        else
        high = mid-1;
    }
    if(maxi>=0)
    return maxi;
    else
    return -1;
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
    cout<<last_occurence(v,n,target)<<"\n";
    return 0;
}

// TC => O(logN)
// SC => O(1)