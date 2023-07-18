// Given a sorted array and a value x, the ceiling of x is the smallest element in an array greater than or equal to x

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ,target;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans =lower_bound(begin(v),end(v),target)-begin(v);
ans!=n?cout<<v[ans]<<endl:cout<<ans<<endl;
}
return 0;
}