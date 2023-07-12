/*
﻿Given N stones, each stone has some weight assigned to it. A box with C capacity is also given. The task is to find out, the minimum number po/boxes which are e require the box.

Note: C>Arr[0] to Arr[N], where Arr[i] represents the weight of ith stone.

Example 1:

Input:

5 -> Value of N

10 20 30 40 50 -> Element of Arr[]

60 -> Value of C

Output:

3 ->Minimum 3 boxes required.

Explanation:

Arr[]={10,20,30,40,50} and C-60

1st box={10,20,30}

2nd box=(40)

Constraints:

1<N<=100

1<=Arr[i]<=100

Arr[i]<C<=200

Example 2:

Input:

4 -> Value of N

10 20 30 30 -> Element of Arr[]

80 -> Value of C

Output:

 2 -> Minimum 2 boxes required.


*/
#include<bits/stdc++.h>
using namespace std;
int noofboxes(int n,vector<int> &v,int capacity)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    int ans = (sum/capacity);
    if((sum%capacity)==0)
    return ans;
    else
    return ans+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int capacity;
    cin>>capacity;
    cout<<noofboxes(n,v,capacity)<<"\n";
}
