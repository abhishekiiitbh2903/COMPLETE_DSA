// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int lowerBound(vector<int>& v,int n , int target){
//     int low =0,high=n-1;
//     int ans =n;
//     while(low<=high){
//      int mid=low+(high-low)/2;
//      if(v[mid]>=target){
//         ans=mid;
//         high=mid-1;
//      }
//      else low=mid+1;
//     }
//     return ans ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int ans =lowerBound(v,n,target);
// cout<<ans<<endl;
// }
// return 0;
// } 

// Time Complexity of the Above is O(logN)


// Solving the above using Cpp Stl

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n,target;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans =lower_bound(begin(v),end(v),1)-begin(v);
cout<<ans<<endl;
}
return 0;
}