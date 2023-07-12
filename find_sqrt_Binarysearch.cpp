#include<bits/stdc++.h>
using namespace std;
int find_sqrt(int n){
    int low=0,high=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid<=n)
        {
            low = mid+1;
        }
        else if(mid*mid>n)
        {
            high = mid-1;
        }
    }
    return high;
}
int main(){
    int n;
    cin>>n;
    cout<<find_sqrt(n);
    return 0;
}

// TC => O(log(N))
// SC => O(1)