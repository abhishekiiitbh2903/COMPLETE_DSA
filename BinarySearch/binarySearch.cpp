// Iterative Implementation of Binary Search

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int binarySearch(vector<int>& v , int n,int target ){
//     int low =0,high=n-1;
//     while(low<=high){
//         int mid =(low+high)/2;
//         if(v[mid]==target) return mid;
//         else if(target>v[mid]) low=mid+1;
//         else high=mid-1;
//     }
//     return -1;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v)cin>>it;
// int ans =binarySearch(v,n,target);
// cout<< ans<<endl; ;
// }
// return 0;
// }

// T.C==>o(logn)

// Recursive Implementation of Binary Serach

#include <bits/stdc++.h>
using namespace std;
#define long long int int;
int binarySearch(vector<int> &v, int n, int low, int high, int target)
{
    if (low > high)
        return -1;
    //    int mid =(low+high)/2;
    int mid = low + (high - low) / 2;
    if (v[mid] == target)
        return mid;
    else if (target > v[mid])
        return binarySearch(v, n, mid + 1, high, target);
    return binarySearch(v, n, low, mid - 1, target);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        int ans = binarySearch(v, n, 0, n - 1, target);
        cout << ans << endl;
        ;
    }
    return 0;
}

// T.C==>o(logn)
