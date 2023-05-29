// Superior Element is defined as the element which is greatest than all of the elements present at its right 
// Return ans in sorted array that is the vector that will be containing the final elements which are superior in a sorted fashion 

// Let's write the brute force solution of the problem 
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
vector<int>ans;
bool flag;
for(int i=0;i<n;i++){
    int x=v[i];
    flag=true;
    for(int j=i+1;j<n;j++){
        if(v[j]>x){
            flag=false;
            break;
        }
    }
    if(flag) ans.emplace_back(v[i]);
}
sort(begin(ans),end(ans));
for(auto &i:ans) cout<<i<<" ";
cout<<endl;
}
return 0;
}


// OPTIMAL SOLUTION

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int maxi=INT_MIN;
// vector<int>ans;
// for(int i=n-1;i>=0;i--){
//     if(v[i]>maxi){
// ans.emplace_back(v[i]);
//     }
//     maxi=max(maxi,v[i]);
// }
// sort(begin(ans),end(ans));
// for(auto &it:ans) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// t.c==> o(n)+O(nlogn)
// s.c==> o(1)