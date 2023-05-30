// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// bool ls(int num, int n,vector<int>& v){
//     for(int i=0;i<n;i++){
//         if(num == v[i]) return true;
//     }
//     return false ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int maxi=INT_MIN;
// int count;
// for(int i=0;i<n;i++){
//     int x=v[i];
//     count=1;
//     // Next consecutive would be x+1
//     while(ls(x+1,n,v)==true){
//         x=x+1;
//         count++;
//     }
//     maxi=max(maxi,count);
// }
// cout<<maxi<<endl;
// }
// return 0;
// }

// time Complexity =O(n^3)... Taking the Worst Case Scenario that is input array if sorted then for element at 0th index it iterates o(n) for n-1 times then for element at 1th index (n-2) times ... for (n-2)th index 1 times == summation of O(n)(n+n-1+n-2+...1) O(n)*O(n^2)==o(n^3)

// S.C. ==> o(1)

// Optimal Solution

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// sort(begin(v),end(v));
// int count=0;
// int longest=1;
// int immediateSmaller=INT_MIN;
// for(int i=0;i<n;i++){
//     if((v[i]-1)==immediateSmaller){
//         count++;
//         immediateSmaller=v[i];
//     }
//     else if(v[i]!=immediateSmaller){
//         count=1;
//         immediateSmaller=v[i];
//     }
//     longest=max(longest,count);
// }
// cout<<longest<<endl;
// }
// return 0;
// }

// tc=o(n)+o(nlogn) for sorting
// sc=0(1)

// Optimal Solution

#include <bits/stdc++.h>
using namespace std;
#define long long int int;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        unordered_set<int> st;
        int longest = 0;
        for (auto &it : v)
            st.insert(it);
        for (auto &it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end())
                {
                    cnt++;
                    x += 1;
                }
                longest = max(longest, cnt);
            }
        }
        cout << longest << endl;
    }
    return 0;
}

// Since there are two loop which are nested i.e. while inside for so we might think it's time complexity will sum up to near around o(n^2) but since we are entering into while loop after a certain if condition and that prevents unnecessary iterations so it will be around {========>0(2n)<=========} +O(n) for storing elements into set so overall it's o(3n)

// sc=o(n) provided every element is unique
