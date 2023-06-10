// BRUTE FORCE 
// GENERATING ALL POSSIBLE SUBARRAYS 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int maxProductSubArray(vector<int> &v, int n){
//     int mx =INT_MIN;
//     int prod;
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         prod=1;
//         for(int k=i;k<=j;k++){
//          prod*=v[k];
//         }
//         mx=max(mx,prod);
//     }
// }
// return mx ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int ans = maxProductSubArray(v,n);
// cout<<ans<<endl;
// }
// return 0;
// }

// Tc=o(n^3)
// Sc =o(n^2)

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int maxProductSubArray(vector<int> &v, int n){
//     int mx =INT_MIN;
//     int prod;
// for(int i=0;i<n;i++){
//         prod=1;
//     for(int j=i;j<n;j++){
//          prod*=v[j];
//         mx=max(mx,prod);
//         }
//     }
// return mx ;
// }

// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int ans = maxProductSubArray(v,n);
// cout<<ans<<endl;
// }
// return 0;
// }

// tc==>o(n^2)
// sc==>o(1)

// Optimal Solution 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int maxProductSubArray(vector<int> &v, int n){
 int mx=INT_MIN;
 int prefix=1,suffix=1;
 for(int i=0;i<n;i++){
    if(prefix==0) prefix=1;
    if(suffix==0) suffix=1;
    prefix*=v[i];
    suffix*=v[n-i-1];
    mx=max(mx,max(prefix,suffix));
 }
 return mx;
}

signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans = maxProductSubArray(v,n);
cout<<ans<<endl;
}
return 0;
}