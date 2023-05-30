// Subarry sum equals k provided input of array contains only positives and zero
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
//         for(int l=i;l<=j;k++){
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

// Better Solution
// Using Map

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,k ;
// cin>>n>>k;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// map<int,int>mp;
// int sum=0;
// int maxLen=0;
// for(int i=0;i<n;i++){
//     sum+=v[i];
//     if(sum==k){
//     maxLen=max(maxLen,i+1);
//     }
//     int rem=sum-k;
//     if(mp.find(rem)!=mp.end()){
//         int len =i-mp[rem];
//         maxLen=max(maxLen,len);
//     }
//     if(mp.find(sum)==mp.end()){
//         mp[sum]=i;
//     } // this line to avoid wrong answer in case we have zeroes in our array as we want to maximize our array
// }
// cout<<maxLen<<endl;
// }
// return 0;
// }

// tc == o(nlogn) if ordered_map and o(n) unordered_map supposing there is no collision
// sc==o(n)


// Optimal Solution
// Two-Pointer

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ,k;
cin>>n>>k;
vector<int>v(n);
for(auto &it:v) cin>>it;
int left=0,right=0;
int sum=v[0];
int maxLen=0;
while(right<n){
    while(left<=right && sum>k){
        sum-=v[left];
        left++;
    }
if(sum==k){
    maxLen=max(maxLen,right-left+1);
}
right++;
if(right<n) sum+=v[right];
}
cout<<maxLen<<endl;
}
return 0;
}

// tc == we might think as there two nested while loops but the max it can iterate will be roughly around so it will be o(n^2 ) but the max iteration it could have would be roughly around o(2n) so tc ==o(2n)

// sc= o(1) no extra space 