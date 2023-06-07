// 1st variation where we will be given a row no and we will have to print the sequence upto that row  

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// vector<int> generateRow(int row)
// {
//     int ans = 1;
//     vector<int> result;
//     result.emplace_back(1);
//     for (int col = 1; col < row; col++)
//     {
//         ans = ans * (row - col);
//         ans = ans / col;
//         result.emplace_back(ans);
//     }
//     return result;
// }
// vector<vector<int>> generate(int numRows)
// {
//     vector<vector<int>> ans;
//     for (int i = 1; i <= numRows; i++)
//     {
//         ans.push_back(generateRow(i));
//     }
//     return ans;
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//     vector<vector<int>> answer=generate(n);
//     for(auto &vec:answer){
//         for(auto &it:vec){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
//   cout<<endl;
// }
//     return 0;
// }


// 2nd Variation : We will just print elemnts of pascal triangle corresponding to that row 

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// vector<int> generateRow(int row)
// {
//     int ans = 1;
//     vector<int> result;
//     result.emplace_back(1);
//     for (int col = 1; col < row; col++)
//     {
//         ans = ans * (row - col);
//         ans = ans / col;
//         result.emplace_back(ans);
//     }
//     return result;
// }
// signed main(){
//     int t ;
//     cin>>t;
//     while(t--){
//         int n ;
//         cin>>n;
//         vector<int> ans =generateRow(n);
//         for(auto &it:ans){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
// }



// 3rd Variation would be to compute a particular element from a column so we have formula for that mathematically that if we are askrd to tell the jth element located at ith row of a triangle  then formula being i-1Cj-1 i.e (row-1 C column-1)
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int combinationCalculator(int row,int col){
    // Formula is (row-1 C column-1) , we have sent beforehandedly row-1 and col-1
    int res =1;
    for(int i=0;i<col;i++){
        res=res*(row-i);
        res/=(i+1);
    }
    return res;
}
signed main(){
int t;
cin>>t;
while(t--){
int i,j;
cin>>i>>j;
int ans = combinationCalculator(i-1,j-1);
cout<<ans<<endl;
}
return 0;
}

