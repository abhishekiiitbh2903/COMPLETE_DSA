// Conditions (i!=j!=k!=l) picked elements should be unique in nature 
// pick four unique elements such that their summation will be equal to 0
// Duplicate vectors not allowed i.e. two vectors shouldn't contain all four same elements 
// Brute Force 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>>fourSum(vector<int> &v, int n ,int target){
// set<vector<int>>st;
// for(int i=0;i<n-3;i++){
//     for(int j=i+1;j<n-2;j++){
//         for(int k=j+1;k<n-1;k++){
//             for(int l=k+1;l<n;l++){
//                 int sum=v[i]+v[j];
//                 sum+=v[k];
//                 sum+=v[l];
//              if(sum==target){
//               vector<int>temp={v[i],v[j],v[k],v[l]};
//               sort(begin(temp),end(temp));
//               st.insert(temp);
//              }
//             }
//         }
//     }
// }
// vector<vector<int>>result(begin(st),end(st));
// return result;
// } 
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target ;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<vector<int>>ans=fourSum(v,n,target);
// for(auto &vec:ans){
//  for(auto & it:vec){
//     cout<<it<<" ";
//  }
//  cout<<endl;
// }
// }
// return 0;
// }

// tc =o(n^4)+o(4log4~o(1) for sorting) +logn for storing into set
//sc =o(n) provided number of max quads equal to n 


// Let's move to the better solution 
// we will go for o(n^3) as fouth number will be equal to negation of (summation of v[i]+v[j],v[k]);
// We will fix i and j and hash numbers between j and k 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>>fourSum(vector<int> &v, int n ,int target){
// set<vector<int>>st;
// for(int i=0;i<n-2;i++){
//     for(int j=i+1;j<n-1;j++){
//         set<int>hashSet;
//         for(int k=j+1;k<n;k++){
//          int sum=v[i]+v[j]+v[k];
//          int fourth=target-sum;
//          if(hashSet.find(fourth)!=hashSet.end()){
//             vector<int>temp={v[i],v[j],v[k],fourth};
//             sort(begin(temp),end(temp));
//             st.insert(temp);
//          }   
//         hashSet.insert(v[k]);
//         }
//     }
// }
// vector<vector<int>>result(begin(st),end(st));
// return result;
// } 
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target ;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<vector<int>>ans=fourSum(v,n,target);
// for(auto &vec:ans){
//  for(auto & it:vec){
//     cout<<it<<" ";
//  }
//  cout<<endl;
// }
// }
// return 0;
// }

// T.c.==o(n^3logm)+o(4log4 for sorting ~0(1))
// s.c.==o(n)+o(number of quads)  We are not counting space of vector for returning the answer

// Optimal Solution using two pointers 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<vector<int>>fourSum(vector<int> &v, int n ,int target){
    sort(begin(v),end(v));
    vector<vector<int>>result;
for(int i=0;i<n;i++){
    if(i>0 && v[i]==v[i-1]) continue ;
    for(int j=i+1;j<n;j++){
        if(j>i+1 && v[j]==v[j-1]) continue ;
        int k = j+1;
        int l=n-1;
        while(k<l){
            int sum=v[i]+v[j];
            sum+=v[k]+v[l];
            if(sum<target) k++;
            else if(sum>target) l--;
            else {
                vector<int>temp={v[i],v[j],v[k],v[l]};
                result.push_back(temp);
                k++;
                l--;
                while(k<l && v[k]==v[k-1]) k++;
                while(k<l && v[l]==v[l+1]) l--;

            }
        }
    }
}
return result;
} 
signed main(){
int t;
cin>>t;
while(t--){
int n,target ;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
vector<vector<int>>ans=fourSum(v,n,target);
for(auto &vec:ans){
 for(auto & it:vec){
    cout<<it<<" ";
 }
 cout<<endl;
}
}
return 0;
}