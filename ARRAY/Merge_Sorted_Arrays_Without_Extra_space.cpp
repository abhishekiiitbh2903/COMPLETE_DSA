// BRUTE FORCE 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// void Merge(vector<int> &v1,vector<int> &v2, int n, int m){
// int i=0;
// int j=0;
// vector<int>v3;
// while(i<n &&j<m){
//     if(v1[i]<=v2[j]){
//        v3.emplace_back(v1[i]);
//        i++;
//     }
//     else{
//        v3.emplace_back(v2[j]);
//        j++; 
//     }
// }
// while(i<n){
//    v3.emplace_back(v1[i]);
//        i++;  
// }
// while(j<m){
//    v3.emplace_back(v2[j]);
//        j++;  
// }
// for(int i=0;i<(n+m);i++){
// if(i<n) v1[i]=v3[i];
// else {
//     v2[i-n]=v3[i];
// }
// }
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m ;
// cin>>n>>m;
// vector<int>v1(n);
// vector<int>v2(m);
// for(auto &it:v1) cin>>it;
// for(auto &it:v2) cin>>it;
// Merge(v1,v2,n,m);
// for(auto &it:v1) cout<<it<<" ";
// cout<<endl;
// for(auto &it:v2) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// T.C===> O(2*(M+N))
// S.C.===> O(M+N)

// OPTIMAL SOLUTION --1

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// void Merge(vector<int> &v1,vector<int> &v2, int n, int m){
// int i=n-1;
// int j=0;
// while(i>0 && j<m){
//     if(v2[j]<v1[i]){
//         swap(v1[i],v2[j]);
//         i--;
//         j++;
//     }
//     else break;
// }
// sort(begin(v1),end(v1));
// sort(begin(v2),end(v2));
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m ;
// cin>>n>>m;
// vector<int>v1(n);
// vector<int>v2(m);
// for(auto &it:v1) cin>>it;
// for(auto &it:v2) cin>>it;
// Merge(v1,v2,n,m);
// for(auto &it:v1) cout<<it<<" ";
// cout<<endl;
// for(auto &it:v2) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// Time Complexity :==> 0(min(n,m)+0(nlogn)+0(mlogm)
//Space Complexity :==>0(1)

// OPTIMAL SOLUTION--2 
// WE WILL USE THE GAP METHOD DERIEVED FROM SHELL SORTING

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void swapIfGreater(vector<int> &v1,vector<int> &v2, int ind1,int ind2){
if(v1[ind1]>v2[ind2]){
    swap(v1[ind1],v2[ind2]);
}
}
void Merge(vector<int> &v1,vector<int> &v2, int n, int m){
int len= (n+m);
int gap=len/2+len%2;
while(gap>0){
    int left=0;
    int right=left+gap;
    // there will be three conditions
    // 1. left in v1 and right in v2
    // 2. both left and right in v2 
    // 2. both left and right in v1
    while(right<len){
     // 1. left in v1 and right in v2
    if(left<n &&right>=n){
     swapIfGreater(v1,v2,left,right-n);
    }
     // 2. both left and right in v2 
    else if(left>=n){
   swapIfGreater(v2,v2,left-n,right-n);
    }
    // 2. both left and right in v1
    else{
     swapIfGreater(v1,v1,left,right);
    }
    left++;
    right++;
    }
    if(gap==1) break;
    gap=gap/2+gap%2;
}
}
signed main(){
int t;
cin>>t;
while(t--){
int n,m ;
cin>>n>>m;
vector<int>v1(n);
vector<int>v2(m);
for(auto &it:v1) cin>>it;
for(auto &it:v2) cin>>it;
Merge(v1,v2,n,m);
for(auto &it:v1) cout<<it<<" ";
cout<<endl;
for(auto &it:v2) cout<<it<<" ";
cout<<endl;
}
return 0;
}