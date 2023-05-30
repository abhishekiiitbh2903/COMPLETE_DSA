// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,k;
// cin>>n>>k;
// vector<int>v(n);
// int count =0;
// for(auto &it:v) cin>>it;
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int sum=0;
//         for(int k=i;k<=j;k++){
//            sum+=v[k];
//         }
//         if(sum==k) count++;
//     }
// }
// cout<<count<<endl;
// }
// return 0;
// }

// tc =o(n^3)
//sc=o(1)

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,k;
// cin>>n>>k;
// vector<int>v(n);
// int count =0;
// for(auto &it:v) cin>>it;
// for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//         sum+=v[j];
//         if(sum==k) count++;
//     }
// }
// cout<<count<<endl;
// }
// return 0;
// }

// tc =o(n^2)
//sc=o(1)

// Optimal Solution

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n,k ;
cin>>n>>k;
vector<int>v(n);
for(auto &it:v) cin>>it;
unordered_map<int,int>mp;
mp[0]=1;
int preSum=0,cnt=0;
for(int i=0;i<n;i++){
    preSum+=v[i];
    int rem=preSum-k;
    cnt+=mp[rem];
    mp[preSum]++;
}
cout<<cnt<<endl;
}
return 0;
}