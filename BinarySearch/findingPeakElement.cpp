// BruteForce tc ==>o(n)
// sc =o(1)
// Peak Element is that element which is greater than its left and  to right as well
// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (auto &it : v)
//             cin >> it;
//         for (int i = 0; i < n; i++)
//         {
//             if ((i == 0 || v[i] > v[i - 1]) && (i == n - 1 || v[i] > v[i + 1]))
//             {
//                 cout << v[i] << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }



// Optimisation providing the condition that there will be single peak element 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int findPeak(vector<int> &v, int n ){
 if(n==1) return v[0];
 if(v[0]>v[1]) return v[0];
 if(v[n-1]>v[n-2]) return v[n-1];
 // Search Space has now been trimmed off
 int low =1,high=n-2;
 while(low<=high){
    int mid = low+(high-low)/2;
    if((v[mid]>v[mid-1])&& (v[mid]>v[mid+1])){
        return v[mid];
    }
    else if(v[mid]>v[mid-1]){
        low=mid+1;
    }
    else high=mid-1;
 }

}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int ans =findPeak(v,n);
cout<<ans<<endl;
}
return 0;
}