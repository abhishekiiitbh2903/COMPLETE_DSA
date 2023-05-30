// Question is asked to calculate whether there are two such numbers present in vector such that when they are summed up equates to target and if exist (======> return indexes of two numbers <=========)

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
//      cout<<i<<" "<<j<<endl;
//        flag=0;
//     }
// }
// if(!flag) break;
// }
// if (flag==1) cout<<0<<" "<<0<<endl;
// }
// return 0; 
// }

// tc==> o(n^2)
// sc==> o(1) no extra space 

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
//      cout<<i<<" "<<j<<endl;
//        flag=0;
//     }
// }
// if(!flag) break;
// }
// if (flag==1) cout<<0<<" "<<0<<endl;
// }
// return 0; 
// }

// tc==> o(n^2)
// sc==> o(1) no extra space 

// Optimised Solution

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
//   cout<<mp[rem]<<" "<<i<<endl;
//   flag=0;
//   break;
// }
// mp[x]=i;
// }
// if(flag==1)cout<<0<<" "<<0<<endl;
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
//   cout<<mp[rem]<<" "<<i<<endl;
//   flag=0;
//   break;
// }
// mp[x]=i;
// }
// if(flag==1)cout<<0<<" "<<0<<endl;
// }
// return 0;
// }

// tc =o(n) in worst case o(n^2)
// sc =o(n)