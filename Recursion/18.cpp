// Time Complexity=2^n*n;
//Space Complexity=n
// Print all SubSequences......
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printSubsequence(int i,vector<int>&ans,vector<int>&v,int n ){
if(i>=n){
if(ans.size()==0) cout<<"{}"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return;  
    }
ans.emplace_back(v[i]);
printSubsequence(i+1,ans,v,n);
ans.pop_back();
printSubsequence(i+1,ans,v,n);
}
signed main(){
int t;
cin>>t;
while(t--){
int n ; 
cin>>n;
vector<int>v(n);
for(auto &i:v) cin>>i;
vector<int>ans;
printSubsequence(0,ans,v,n);
}
return 0;
}