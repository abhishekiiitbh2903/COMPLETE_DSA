// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// void markRow(vector<vector<int>> &matrix, int n, int m, int i)
// {
//     // set all non-zero elements as -1 in the row i:
//     for (int j = 0; j < m; j++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n, int m, int j)
// {
//     // set all non-zero elements as -1 in the col j:
//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {

//     // Set -1 for rows and cols
//     // that contains 0. Don't mark any 0 as -1:

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 markRow(matrix, n, m, i);
//                 markCol(matrix, n, m, j);
//             }
//         }
//     }

//     // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
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
//         vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//         cout << "The Final matrix is: ";
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

// Overall T.C ==o(n*m)o(n+m)+o(n*m) // iteration then calling markRow and Mark Column and then again iterating to convert -1 to zeroes approx o(n^3)
// S.C> o(1) no extra space

// Let's optimise it a bit

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {
// vector<int>Row(n,0);
// vector<int>Col(m,0);
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(matrix[i][j]==0){
//             Row[i]=1;
//             Col[j]=1;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(Row[i]||Col[j]) matrix[i][j]=0;
//     }
// }
//  return matrix;
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
//         vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//         cout << "The Final matrix is: ";
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

// tc==0(2*m*n)
// sc=o(m)+o(n)

// Let's optimise the space as the vector which we were taking outside we will now bring that inside  

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int col0=1;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
          matrix[i][0]=0;
          if(j!=0) matrix[0][j]=0;
          else col0=0;
        }
    }
}
for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        if(matrix[0][j]==0||matrix[i][0]==0){
            matrix[i][j]=0;
        }
    }
}
if(matrix[0][0]==0){
    for(int j=0;j<m;j++){
        matrix[0][j]=0;
    }
}
if(col0==0){
    for(int i=1;i<n;i++){
        matrix[i][0]=0;
    }
}
return matrix ;
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
        vector<vector<int>> ans = zeroMatrix(matrix, n, m);

        cout << "The Final matrix is: ";
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