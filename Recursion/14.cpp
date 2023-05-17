// Reverse An Array/vector 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void reverse(int i ,vector<int>&v,int n ){
    if(i>=n/2) return ;
    swap(v[i],v[n-i-1]);
    reverse(i+1,v,n);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    reverse(0,v,n);
    for(auto it :v) cout<<it<<" ";
}
return 0;
}