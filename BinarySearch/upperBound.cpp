// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int upperBound(vector<int>& v,int n , int target){
//     int low =0,high=n-1;
//     int ans =n;
//     while(low<=high){
//      int mid=low+(high-low)/2;
//      if(v[mid]>target){
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
// int ans =upperBound(v,n,target);
// cout<<ans<<endl;
// }
// return 0;
// } 
// Time Complexity : 0(logN)

// using Stl 
 #include<bits/stdc++.h>
 using namespace std ;
 #define long long int int;
 signed main(){
 int t;
 cin>>t;
 while(t--){
 int n ;
 cin>>n;
 vector<int>v(n);
 for(auto &it:v) cin>>it;
 int ans = upper_bound(begin(v),end(v),2)-begin(v);
 cout<<ans<<endl;
 }
 return 0;
 }