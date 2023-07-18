// Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.

// (floor(x)==largest element k in arr <=x)

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int floor(vector<int> &v, int n , int target){
int low =0,high=n-1;
int ans =-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]<=target){
      ans=mid;
      low=mid+1;
    }
    else high=mid-1;
}
return ans!=-1?v[ans]:ans;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,target ;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans=floor(v,n,target);
cout<<ans<<endl;
}
return 0;
}