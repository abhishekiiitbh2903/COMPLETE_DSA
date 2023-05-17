// Time Complexity=2^n*n;
//Space Complexity=n
// Print all SubSequence whose sum is equal to k ,here k==2.
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printSubsequence(int i,vector<int>&ans,vector<int>&v,int n , int sum ){
if(i>=n){
    if(sum==2){
if(ans.size()==0) cout<<"{}"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    }
    return ;  
}
ans.emplace_back(v[i]);
sum+=v[i];
printSubsequence(i+1,ans,v,n,sum);
ans.pop_back();
sum-=v[i];
printSubsequence(i+1,ans,v,n,sum);
}
signed main(){
int t;
cin>>t;
while(t--){
int n ; 
cin>>n;
vector<int>v(n);
for(auto &i:v) cin>>i;
vector<int> ans ;
printSubsequence(0,ans,v,n,0);
}
return 0;
}