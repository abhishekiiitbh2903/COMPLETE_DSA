#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int findRotationNumber(vector<int> &v , int n ){
    int low=0,high=n-1;
    int ans=INT_MAX;
    int index=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[low]<=v[mid]){
           if(ans>v[low]){
              index=low;
              ans=v[low];
           }
            low=mid+1;
        }
        else{
          if(ans>v[mid]){
              index=mid;
              ans=v[mid];
           }
           high=mid-1; 
        }
    }
    return index;
}

signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans =findRotationNumber(v,n);
cout<<ans<<endl;
}
return 0;
}