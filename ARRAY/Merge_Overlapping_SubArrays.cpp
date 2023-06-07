// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>>generatePairs(vector<vector<int>> &pairs, int n){
//     vector<vector<int>>ans;
//     sort(begin(pairs),end(pairs));
//     for(int i=0;i<n;i++){
//         int start= pairs[i][0];
//         int end =pairs[i][1];
//         if(!ans.empty() && end<=ans.back()[1]){
//             continue;
//         }
//         for(int j=i+1;j<n;j++){
//             if(pairs[j][0]<=end){
//                 end=max(end,pairs[j][1]);
//             }
//             else break;
//         }
//         ans.push_back({start,end});
//     }
//     return ans ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<vector<int>>pairs(n,vector<int>(2));
// for(int i=0;i<n;i++){
//     for(int j=0;j<2;j++){
//         cin>>pairs[i][j];
//     }
// }
// vector<vector<int>>ans=generatePairs(pairs,n);
// for(auto &vec:ans){
//     for(auto &it:vec){
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }
// }
// return 0;
// }

// tc ==o(nlogn) for sorting +o(2n) for two loops it might appear as it would be n^2 but it is just 2n 
// sc=o(1) no extra space 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<vector<int>>generatePairs(vector<vector<int>> &pairs, int n){
    vector<vector<int>>ans;
    sort(begin(pairs),end(pairs));
    for(int i=0;i<n;i++){
        if(ans.empty()||ans.back()[1]<pairs[i][0]){
            ans.push_back(pairs[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],pairs[i][1]);
        }
    }
    return ans ;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<vector<int>>pairs(n,vector<int>(2));
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin>>pairs[i][j];
    }
}
vector<vector<int>>ans=generatePairs(pairs,n);
for(auto &vec:ans){
    for(auto &it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
}
return 0;
}
