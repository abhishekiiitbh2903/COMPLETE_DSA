// BruteForce to Solve the following problem 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int f(int i, int m){
//     int ans =1;
//     for(int j=1;j<=m;j++){
//         ans*=i;
//     }
//     return ans ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m ;
// cin>>n>>m;
// bool flag =false;
// for(int i=1;i<=n;i++){
//     if(f(i,m)==n){
//         cout<<i<<endl;
//         flag=true;
//         break;
//     }
//     else if(f(i,m)>n) break;
// }
// if(!flag) cout<<-1<<endl;
// }
// return 0;
// }

// time Complexity of the above approach is O(n*m)
// Space Complexity==>o(1)

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m ;
// cin>>n>>m;
// bool flag =false;
// for(int i=1;i<=n;i++){
//     if((int)pow(i,m)==n){
//         cout<<i<<endl;
//         flag=true;
//         break;
//     }
//     else if((int)pow(i,m)>n) break;
// }
// if(!flag) cout<<-1<<endl;
// }
// return 0;
// }
// time Complexity of the above approach is O(n*logM)
// Space Complexity==>o(1)

// Optimal Approach 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int f(int i, int m,int n){
    int ans =1;
    for(int j=1;j<=m;j++){
        ans*=i;
        if(ans>n) return 2 ;
    }
   if(ans==n) return 1;
   else return 0 ;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,m ;
cin>>n>>m;
bool flag =false;
int low =1,high=n;
while(low<=high){
    int mid = low+(high-low)/2;
    if(f(mid,m,n)==1) {
        cout<<mid<<endl;
        flag=true;
        break;
    }
    else if(f(mid,m,n)==2){
        high=mid-1;
    }
    else low=mid+1;
}
if(!flag) cout<<-1<<endl;
}
return 0;
}