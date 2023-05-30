// Question is asked to calculate whether there are two such numbers present in vector such that when they are summed up equates to target and if exist (======> return yes else no <=========)
// Numbers from same index are not allowed 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int flag=1;
// for(int i=0;i<n;i++){
//   for(int j=0;j<n;j++){
//     if(i==j)continue;
//     if((v[i]+v[j])==target){
//        flag=0;
//     }
// }
// if(!flag) break;
// }
// flag==1?cout<<"NO"<<endl:cout<<"YES"<<endl;
// }
// return 0;
// }

// tc==> o(n^2)
// sc==> o(1) no extra space 



// Solution No- 2

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int flag=1;
// for(int i=0;i<n;i++){
//   for(int j=i+1;j<n;j++){
//     if((v[i]+v[j])==target){
//        flag=0;
//     }
// }
// if(!flag) break;
// }
// flag==1?cout<<"NO"<<endl:cout<<"YES"<<endl;
// }
// return 0;
// }

// TC is O(n^2)
// SC is O(1) as no extra space we are using 

/// Better Solution

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// map<int,int>mp;
// int flag=1;
// for(int i=0;i<n;i++){
// int x=v[i];
// int rem=target-x;
// if(mp.find(rem)!=mp.end()){
//   cout<<"YES"<<endl;
//   flag=0;
//   break;
// }
// mp[x]=i;
// }
// if(flag==1)cout<<"NO"<<endl;
// }
// return 0;
// }

// tc =o(nlogn)
// sc =o(n) as we are using map

// using Unordered Map

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// unordered_map<int,int>mp;
// int flag=1;
// for(int i=0;i<n;i++){
// int x=v[i];
// int rem=target-x;
// if(mp.find(rem)!=mp.end()){
//   cout<<"YES"<<endl;
//   flag=0;
//   break;
// }
// mp[x]=i;
// }
// if(flag==1)cout<<"NO"<<endl;
// }
// return 0;
// }

// tc =o(n) in worst case o(n^2)
// sc =o(n)

// Optimal Solution using two pointers 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n,target ;
cin>>n>>target;
vector<int>vec(n);
for(auto &it:vec) cin>>it;
sort(begin(vec),end(vec));
int left=0;
int right=n-1;
bool flag=false;
while(left<right){
    if(vec[left]+vec[right]==target){
      flag=!flag;
      break;
    }
   else if((vec[left]+vec[right])<target) left++;
   else right--;
}
flag==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
return 0;
}

// tc = 0(n)+o(nlogn)for sorting
// sc =o(1)