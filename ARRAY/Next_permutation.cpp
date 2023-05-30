// Intuition : We will generate all possible permutations and find the next permutation among them .
// Next Permutation is basically lexicographically next permutation
// Note Point: In Interview we will tell just brute force and not code it out as it consumes lot more time

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// vector<vector<int>> ans;
// void Permutation_Generator(vector<int> &v, int n, vector<int> &ds, vector<bool> &visited)
// {
//     if (ds.size() == n)
//     {
//         ans.push_back(ds);
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             ds.emplace_back(v[i]);
//             visited[i] = true;
//             Permutation_Generator(v, n, ds, visited);
//             // backtracking
//             visited[i] = false;
//             ds.pop_back();
//         }
//     }
// }
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
//         vector<int> vec = v;
//         sort(begin(v), end(v));
//         vector<int> ds;
//         vector<bool> visited(n, false);
//         // Let's generate all permutations
//         Permutation_Generator(v, n, ds, visited);
//         int idx = 0;
//         for (int i = 0; i < ans.size(); i++)
//         {
//             if (ans[i] == vec)
//             {
//                 if (i < ans.size() - 1)
//                     idx = i + 1;
//                 break;
//             }
//         }
//         for (int j = 0; j < ans[0].size(); j++)
//         {
//             cout << ans[idx][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// tc =0(n!*n)
// sc=o(n) for ds and o(n) for visited

// #include <bits/stdc++.h>
// using namespace std;
// #define long long int int;
// vector<vector<int>> ans;
// void Permutation_Generator(int index , vector<int> &v, int n)
// {
//     if (index== n)
//     {
//         ans.push_back(v);
//         return;
//     }
//     for (int i = index; i < n; i++)
//     {
//        swap(v[i],v[index]);
//         Permutation_Generator(index+1,v,n);
//         swap(v[index],v[i]);

//     }
// }
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
//         vector<int> vec = v;
//         sort(begin(v), end(v));
//         // Let's generate all permutations
//         Permutation_Generator(0,v, n);
//         int idx = 0;
//         for (int i = 0; i < ans.size(); i++)
//         {
//             if (ans[i] == vec)
//             {
//                 if (i < ans.size() - 1)
//                     idx = i + 1;
//                 break;
//             }
//         }
//         for(auto &it:ans){
//             for(auto &i:it) cout<<i<<" ";
//             cout<<endl;
//         }
//         for (int j = 0; j < ans[0].size(); j++)
//         {
//             cout << ans[idx][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Above approach to generate all recursion doesn't provide permutaions in sorted order so go with first way in order to implement brute force
// tc==o(n!*n)
// sc=o(1) ignoring auxillary and stack space

// STL METHOD

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
//         next_permutation(begin(v), end(v));
//         for (auto &i : v)
//             cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }

// tc = O(1)
// sc = O(1)

// Let's implement Next permutation

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
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] < v[i + 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            reverse(begin(v), end(v));
            for (auto &it : v)
                cout << it << " ";
            cout << endl;
        }
        for (int i = n - 1; i > idx; i--)
        {
            if (v[idx] < v[i])
            {
                swap(v[i], v[idx]);
                break;
            }
        }
        reverse(v.begin() + idx + 1, v.end());
        if (idx != -1)
        {
            for (auto &it : v)
                cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}

// t.c. roughly around o(4n) n for iterating from n-2 till 0 to find breaking point thenafter iterating from n-1 till found idx to find first value just greater than v[idx] and then o(n) to reverse and then o(n) to print 

// S.C.= o(1) No Extra Space 
