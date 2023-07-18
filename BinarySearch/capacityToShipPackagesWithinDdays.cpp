// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int f(vector<int> &v, int capacity){
//     int day=1,load=0;
//     for(int i=0;i<v.size();i++){
//         if((load+v[i])>capacity){
//             day++;
//             load=v[i];
//         }
//     else load+=v[i];
//     }
//     return day;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ,days;
// cin>>n>>days;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int minRange=*max_element(begin(v),end(v));
// int maxRange=accumulate(begin(v),end(v),0);
// for(int i=minRange;i<=maxRange;i++){
//     int daysNeeded=f(v,i);
//     if(daysNeeded<=days){
//         cout<<i<<endl;
//         break;
//     }
// }
// }
// return 0;
// } 

// Nearly O(n^2) 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int f(vector<int> &v, int capacity){
    int day=1,load=0;
    for(int i=0;i<v.size();i++){
        if((load+v[i])>capacity){
            day++;
            load=v[i];
        }
    else load+=v[i];
    }
    return day;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ,days;
cin>>n>>days;
vector<int>v(n);
for(auto &it:v) cin>>it;
int minRange=*max_element(begin(v),end(v));
int maxRange=accumulate(begin(v),end(v),0);
int low =minRange;
int high =maxRange;
int ans=-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(f(v,mid)<=days){
      ans=mid;
      high=mid-1;
    }
    else low=mid+1;
}
cout<<ans<<endl;
}
return 0;
} 