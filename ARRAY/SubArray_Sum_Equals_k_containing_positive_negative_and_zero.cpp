// SubArray containing + - and 0 all three 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ,k;
// cin>>n>>k;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int len=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//          int sum=0;
//         for(int l=i;l<=j;l++){
//             sum+=v[l];
//         }
//             if(sum==k) {
//                 len=max(len,j-i+1);
//             }
//     }
// }
// cout<<len<<endl;
// }
// return 0;
// }

// Three nested for loops so o(n^3)
// No extra space so o(1)

// A bit optimization as we won't use third loop in order to calculate sum

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);
//         for (auto &it : v)
//             cin >> it;
//         int len = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int sum = 0;
//             for (int j = i; j < n; j++)
//             {
//                 sum += v[j];
//                 if (sum == k)
//                 {
//                     len = max(len, j - i + 1);
//                 }
//             }
//         }
//         cout<<len<<endl;
//     }
//     return 0;
// }


// tc ==o(n^2)
// sc ==o(1) no extra space 

// Optimal Solution
// Using Map

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n,k ;
cin>>n>>k;
vector<int>v(n);
for(auto &it:v) cin>>it;
map<int,int>mp;
int sum=0;
int maxLen=0;
for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum==k){
    maxLen=max(maxLen,i+1);
    }
    int rem=sum-k;
    if(mp.find(rem)!=mp.end()){
        int len =i-mp[rem];
        maxLen=max(maxLen,len);
    }
    if(mp.find(sum)==mp.end()){
        mp[sum]=i;
    } // this line to avoid wrong answer in case we have zeroes in our array as we want to maximize our array
}
cout<<maxLen<<endl;
}
return 0;
}

// tc == o(nlogn) if ordered_map and o(n) unordered_map supposing there is no collision
// sc==o(n)