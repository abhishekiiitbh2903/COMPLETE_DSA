#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int findMin(vector<int> &v , int n ){
    int low=0,high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==v[low] && v[mid]==v[high]){
            ans=min(ans,v[low]);
            low++;
            high--;
            continue;
        }
        if(v[low]<=v[mid]){
            ans=min(ans,v[low]);
            low=mid+1;
        }
        else{
           ans =min(ans,v[mid]);
           high=mid-1; 
        }
    }
    return ans ;
}

signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans =findMin(v,n);
cout<<ans<<endl;
}
return 0;
}