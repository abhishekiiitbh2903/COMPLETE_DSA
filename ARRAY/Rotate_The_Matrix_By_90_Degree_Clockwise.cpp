
// Brute Force Approach
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>> Rotator(vector<vector<int>> matrix, int n , int m ){
// vector<vector<int>>ans(n, vector<int>(m));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         ans[j][n-i-1]=matrix[i][j];
//     }
// }
// return ans ;
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<vector<int>> matrix(n, vector<int>(m));

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin >> matrix[i][j];
//             }
//         }
//         vector<vector<int>> ans = Rotator(matrix, n, m);

//         cout << "The Final matrix after rotaion is: ";
//         cout << endl;
//         for (auto it : ans)
//         {
//             for (auto ele : it)
//             {
//                 cout << ele << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// T.C> o(m*n)
//S.C> o(m*n)

// Let's optimise space using inplace algorithm 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<vector<int>> Rotator(vector<vector<int>>& matrix, int n , int m ){
    // Taking the transpose of matrix 
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<m;j++){
       swap(matrix[i][j],matrix[j][i]);
    }
}
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
return matrix;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        vector<vector<int>> ans = Rotator(matrix, n, m);

        cout << "The Final matrix after rotaion is: ";
        cout << endl;
        for (auto it : ans)
        {
            for (auto ele : it)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    }
    return 0;
}