// Applying Brute Force to find Square root of a Number
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n;
// cin>>n;
// int ans =1;
// for(int i=1;i<=n;i++){
//     if(i*i<=n){
//         ans=i;
//     }
//     else break ;
// }
// cout<<ans<<endl;
// }
// return 0;
// }

// Tc==> o(n)
// Sc==o(1)

// optimised version of the above approach 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
int low =1,high=n;
int ans =1 ;
while(low<=high){
    int mid = low+(high-low)/2;
    if(mid*mid<=n){
      ans =mid ;
      low =mid+1;
    }
    else high=mid-1;
}
cout<<high<<endl;
}
return 0;
}