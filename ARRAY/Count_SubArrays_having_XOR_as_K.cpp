// in this problem we are asked to return the count of subarray having property that if all elements of that subArray will be xorred together will give the value equal to k ..
// Brute force would be to generate all subarrays and manually check the properties in all subarray using three loops

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// int Xor, cnt = 0;
// int xorGenerator(vector<int> &v, int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             Xor = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 Xor ^= v[k];
//             }
//             if (Xor == k)
//                 cnt++;
//         }
//     }
//     return cnt;
// }
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
//         int ans = xorGenerator(v, n, k);
//         cout << ans << endl;
//     }
//     return 0;
// }

// tc==o(n^3)
// sc=o(1)

// <==== We will try to bring the complexity to o(n^2) as we don't need basically the third loop ===>
// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// int Xor, cnt = 0;
// int xorGenerator(vector<int> &v, int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         Xor = 0;
//         for (int j = i; j < n; j++)
//         {
//             Xor ^= v[j];
//             if (Xor == k)
//                 cnt++;
//         }
//     }
//     return cnt;
// }
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
//         int ans = xorGenerator(v, n, k);
//         cout << ans << endl;
//     }
//     return 0;
// }

// tc==>o(n^2)
// sc==> o(1)

// Optimal Solution

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int Xor=0,cnt=0;
int xorGenerator(vector<int> &v , int n , int k){
  unordered_map<int,int>mp;
  mp[Xor]++;
  for(int i=0;i<n;i++){
    Xor^=v[i];
    int x = Xor^k;
    cnt+=mp[x];
    mp[Xor]++;
  }
  return cnt; 
}
signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans = xorGenerator(v,n,k);
cout<<ans<<endl;
}
return 0;
}