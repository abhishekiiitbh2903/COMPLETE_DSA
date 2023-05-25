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
int count=0;
int mx=0;
for(int i=0;i<n;i++){
    if(v[i]==1){
        count++;
        mx=max(mx,count);
    }
    else count=0;
}
cout<<mx<<endl;
}
return 0;
}