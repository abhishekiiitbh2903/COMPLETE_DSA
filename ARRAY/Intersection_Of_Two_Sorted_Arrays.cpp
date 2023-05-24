#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<int> Solve(vector<int> &v1, vector<int> &v2, int n, int m)
{
    int i=0,j=0;
    vector<int> ans;
    while(i<n &&j<m){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v2[j]<v1[i]){
            j++;
        }
        else{
            ans.emplace_back(v1[i]);
            i++;
            j++;
        }
    }
    return ans ;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        for (auto &it : v1)
            cin >> it;
        for (auto &it : v2)
            cin >> it;
        vector<int> result = Solve(v1, v2, n, m);
        for (auto &i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// tc is o(n*m)
// sc is o(m) or whatever vector we are selecting as for visited marking 


// Optimal Approach

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<int> Solve(vector<int> &v1, vector<int> &v2, int n, int m)
// {
//     vector<int> ans;
//     vector<bool>visited(m,false);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(v1[i]==v2[j] && visited[j]==false){
//             ans.emplace_back(v1[i]);
//             visited[j]=true;
//             break;
//             }
//             if(v2[j]>v1[i]) break;
//         }
//     }
//     return ans ;
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> v1(n);
//         vector<int> v2(m);
//         for (auto &it : v1)
//             cin >> it;
//         for (auto &it : v2)
//             cin >> it;
//         vector<int> result = Solve(v1, v2, n, m);
//         for (auto &i : result)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }