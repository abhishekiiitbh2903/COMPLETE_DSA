// Here in this question we have to return the best time to buy and sell stocks 

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
int mn=v[0];
int maxProfit=INT_MIN;
for(int i=1;i<n;i++){
int profit=v[i]-mn;
maxProfit=max(maxProfit,profit);
mn=min(mn,v[i]);
}
cout<<maxProfit<<endl;
}
return 0;
}