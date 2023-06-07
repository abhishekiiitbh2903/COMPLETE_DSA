// Brute Force
// We will have to find the element which occurs for minimum of floor(n/3) times i.e. (n/3 +1) times so by basic maths we can come to conclusion that the max elements whose frequency can be equal or more than floor of n/3 will be at most 2

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
//  vector<int> majorityElement(vector<int>& nums) {
//     vector<int>ans ;
//     int n =nums.size();
//     int mini=((n/3)+1);
//     for(int i=0;i<n;i++){
//     if(ans.size()==0||ans.back()!=nums[i]){
//     int count =0;
//     for(int j=0;j<n;j++){
//      if(nums[j]==nums[i]) count++;
//     }
//     if(count>=mini) ans.emplace_back(nums[i]);
//     if(ans.size()>=2) break;
//     }
//     }
//     return ans ;
//     }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<int>ans=majorityElement(v);
// for(auto &it:ans){
//     cout<<it<<" ";
// }
// cout<<endl;
// }
// return 0;
// }

// T.C> o(n^2)
// S.c. > o(1)

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
// unordered_map<int,int>mp;
// vector<int>ans;
// for(auto &it:v){
// mp[it]++;
// if((mp[it]==((n/3)+1))){
//    if(ans.empty()||ans.back()!=it){
//     ans.push_back(it);
//    }
// }
// if(ans.size()==2) break;
// }
// for(auto &it :ans ){
//     cout<<it<<" ";
// }
// cout<<endl;
// }
// return 0;
// }

// tc==o(n)+(o(1)/o(logn))
// sc==o(1)

// Moore's Voting Algorithm

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
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && ele2 != v[i])
            {
                cnt1 = 1;
                ele1 = v[i];
            }
            else if (cnt2 == 0 && ele1 != v[i])
            {
                cnt2 = 1;
                ele2 = v[i];
            }
            else if (v[i] == ele1)
                cnt1++;
            else if (v[i] == ele2)
                cnt2++;
            else
                cnt1--, cnt2--;
        }
        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (ele1 == v[i])
                cnt1++;
            if (ele2 == v[i])
                cnt2++;
        }
        if (cnt1 >= ((n / 3) + 1))
            ans.push_back(ele1);
        if (cnt2 >= ((n / 3) + 1))
            ans.push_back(ele2);
        for (auto &it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// T.c == o(2n)
// S.C.=o(1)