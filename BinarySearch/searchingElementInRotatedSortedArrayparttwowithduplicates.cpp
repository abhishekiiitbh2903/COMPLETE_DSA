#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
bool searchElement(vector<int> &v ,int n , int target){
    int low =0;
    int high=n-1;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(v[mid]==target) return true ;
        if(v[low]==v[mid] && v[mid]==v[high]){
            low++;
            high--;
            continue;
        }
        // Left half is sorted 
        if(v[low]<=v[mid]){
         if(v[low]<=target && target<=v[mid]){
          high=mid-1;
         }
         else low=mid+1;
        }
        else {
            if(v[mid]<=target && target<=v[high]){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return false;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,target;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
bool ans = searchElement(v,n,target);
cout<<ans<<endl;
}
return 0;
}