#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int f( vector<int> &v , int mid,int n){
    int hour=0;
    for(int i=0;i<n;i++){
      if(v[i]%mid==0){
        hour+=v[i]/mid;
      }
      else hour+=(v[i]/mid)+1;
    }
    return hour;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ,hours;
cin>>n>>hours;
vector<int>v(n);
for(auto &it:v) cin>>it;
int mx =*max_element(begin(v),end(v));
int low =1,high=mx,ans=INT_MAX;
while(low<=high){
    int mid =low+(high-low)/2;
    int totalHours=f(v,mid,n);
    if(totalHours<=hours){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;
}
cout<<ans<<endl;
}
return 0;
} 