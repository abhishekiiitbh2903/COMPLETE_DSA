// let's analyse considering the following example
// v=[1,2,4,7] and x==6 to be inserted in such a way that sorted nature of vector should remain unaltered
// So in order to preserve sorted nature we will insert 6 at index 3 and if we observe it's none other than than lower bound of that index 
// As in case of [1 2 4 7 ] and x=2 we will insert 2 at index 1 which is lower bound of x 


#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n,x ;
cin>>n>>x;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans=lower_bound(begin(v),end(v),x)-begin(v);
cout<<ans<<endl;
}
return 0;
}