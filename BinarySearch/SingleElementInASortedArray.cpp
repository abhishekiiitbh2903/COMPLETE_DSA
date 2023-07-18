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
//             if (i == 0)
//             {
//                 if (v[i] != v[i + 1])
//                 {
//                     cout << v[i] << endl;
//                     break;
//                 }
//             }
//             else if (i == n - 1)
//             {
//                 if (v[i] != v[i - 1])
//                 {
//                     cout << v[i] << endl;
//                     break;
//                 }
//             }
//             else
//             {
//                 if (v[i] != v[i + 1] && v[i] != v[i - 1])
//                 {
//                     cout << v[i] << endl;
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Time Complexity ==>O(n)



// Optimal Solution 


// We have some observations before we will move onto solution of this and here are those 


// if we would be in left half of the elemnt we are finding then  element present at even and odd index will be equal like the sequence of index will be even following odd 
// Reverse of that in case when we will be in right of the element we are searching for 



#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
// Dealing with edge case
if(n==1) cout<< v[0]<<endl;
// Trimming Down Search Space
if(v[0]!=v[1]) cout<<v[0]<<endl;
if(v[n-1]!=v[n-2]) cout<<v[n-1]<<endl;
int low=1;
int high=n-2;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]!=v[mid-1] && v[mid]!=v[mid+1]){
        cout<<v[mid]<<endl;
        break;
    }
    // Elimination
    if((mid%2==1 && v[mid]==v[mid-1]) ||( mid%2==0 && v[mid]==v[mid+1])){
        low=mid+1;
    }
    else high=mid-1;
}
}
return 0;
}