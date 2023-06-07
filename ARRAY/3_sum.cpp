// Conditions (i!=j!=k) picked elements should be unique in nature 
// pick three unique elements such that their summation will be equal to 0
// Duplicate vectors not allowed i.e. two vectors shouldn't contain all three same elements 
// Brute Force 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>>threeSum(vector<int> &v, int n ){
// set<vector<int>>st;
//  for(int i=0;i<n-2;i++){
//     for(int j=i+1;j<n-1;j++){
//     for(int k=j+1;k<n;k++){
//         if(v[i]+v[j]+v[k]==0){
//          vector<int>temp={v[i],v[j],v[k]};
//          sort(begin(temp),end(temp));
//          st.insert(temp);
//         }
//     }
//     }
//  }
// vector<vector<int>>result(begin(st),end(st));
// return result;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<vector<int>>ans=threeSum(v,n);
// for(auto &vec:ans){
//  for(auto & it:vec){
//     cout<<it<<" ";
//  }
//  cout<<endl;
// }
// }
// return 0;
// }

// T.C--> o(n^3)+(o(3log3)~o(1))+o(logn) to insert into set 
// S.C--> o(max trio pairs)~o(n)

// INTUITION:-

// our second approach would be to somehow reduce the complexity of n^3 to n^2 , Let's achieve it . We know that since we have to find v[i]+v[j]+v[k]=0 ==> v[i]+v[j]=-v[k] ==> v[k]=-(v[i]+v[j])
// Since we have to ensure i!=j!=k and that we will achieve via using hashing between the elements occuring between i and j 
// To ensure that all vectors are unique i.e. not all three elements are same we will use set data structure 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>>threeSum(vector<int> &v, int n ){
// set<vector<int>>st;
//  for(int i=0;i<n-1;i++){
//     set<int>hashSet;
//     for(int j=i+1;j<n;j++){
//      int third = -(v[i]+v[j]);
//      if(hashSet.find(third)!=hashSet.end()){
//         vector<int>temp={v[i],v[j],third};
//         sort(begin(temp),end(temp));
//         st.insert(temp);
//      }
//      hashSet.insert(v[j]);
//     }
//  }
// vector<vector<int>>result(begin(st),end(st));
// return result;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<vector<int>>ans=threeSum(v,n);
// for(auto &vec:ans){
//  for(auto & it:vec){
//     cout<<it<<" ";
//  }
//  cout<<endl;
// }
// }
// return 0;
// }

// T.C ==> o(n^2*logn)+0(logn ) to insert into set
// S.C ==> o(2*n)

// Intuition: We'll use two pointer approach to tackle with unique vectors and as well as to counter i!=j!=k
// We will first sort the array
// We will fix i and will move j and k in reverse direction 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<vector<int>>threeSum(vector<int> &v, int n ){
vector<vector<int>>result;
sort(begin(v),end(v));
for(int i=0;i<n;i++){
 if(i>0 && v[i]==v[i-1]) continue ;
 int j=i+1;
 int k=n-1;
 while(j<k){
    int sum=v[i]+v[j]+v[k];
    if(sum<0) j++;
    else if(sum>0) k--;
    else{
        vector<int>temp={v[i],v[j],v[k]};
        result.push_back(temp);
        j++;
        k--;
        while(j<k && v[j]==v[j-1]) j++;
        while(j<k && v[k]==v[k+1]) k--;
    }
 }
}
return result;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
vector<vector<int>>ans=threeSum(v,n);
for(auto &vec:ans){
 for(auto & it:vec){
    cout<<it<<" ";
 }
 cout<<endl;
}
}
return 0;
}