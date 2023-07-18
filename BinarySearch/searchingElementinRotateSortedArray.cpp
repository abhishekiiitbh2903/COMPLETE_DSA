// In Normal Binary search we used to be in a position to directly eliminate either half of the mid as both side used to be sorted at that moment .Here we will have to first find as which portion of array is sorted first and then we can apply the elimination technique 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int searchElement(vector<int> &v ,int n , int target){
    int low =0;
    int high=n-1;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(v[mid]==target) return mid ;
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
    return -1;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,target;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans = searchElement(v,n,target);
cout<<ans<<endl;
}
return 0;
}