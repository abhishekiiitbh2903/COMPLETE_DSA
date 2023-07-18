#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int possible(vector<int>& v,int mid){
 int sum =0;
 for(int i=0;i<v.size();i++){
      if(v[i]%mid==0) sum+=v[i]/mid;
      else sum+=(v[i]/mid)+1;
 }
 return sum;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,threshold ;
cin>>n>>threshold;
vector<int>v(n);
for(auto &it:v) cin>>it;
int maxElement=*max_element(begin(v),end(v));
int low =1;
int high =maxElement;
int ans =-1;
while(low<=high){
    int mid =low+(high-low)/2;
    if(possible(v,mid)<=threshold){
         ans=mid;
         high=mid-1;
    }
    else low=mid+1;
}
cout<<ans<<endl;
}
return 0;
}

// o(nlogN) 
//o(1)
