// Every element in array appear twice except one element and we are required to print that element
// Brute Force
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
        for (int i = 0; i < n; i++)
        {
            int nums = v[i];
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[j] == nums)
                    count++;
            }
            if (count < 2)
            {
                cout << nums << endl;
                break;
            }
        }
    }
    return 0;
}

// tc == o(n^2) which is very hypothetical as we are supposing as in none iteration break from loop did happen
// No extra Space o(1)

// Better Solution

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
        // 1. Finding max element so that we can initialise our hash array in an efficient way
        int mx = INT_MIN;
        for (auto &it : v)
            mx = max(mx, it);        // o(n)
        vector<int> hash(mx + 1, 0); // sc. o(mx+1)
        for (int i = 0; i < n; i++)
        {
            hash[v[i]]++;
        } // o(n)
        for (int i = 0; i < hash.size(); i++)
        {
            if (hash[i] == 1)
            {
                cout << i << endl;
                break;
            }
        } // o(mx+1)
    }
    return 0;
}
// overall tc =0(n+n+mx+1) ~(3n)
// sc =0(mx+1)

// Better Solution 2

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
        map<int, int> mp;
        for (auto &it : v)
            mp[it]++; // o(nlogm) where m is size of map here it will be (n/2+1);
        for (auto &it : mp)
        {
            if (it.second < 2)
            {
                cout << it.first << endl;
                break;
            }
        }
        // o(n/2+1) max elements present in map throughout which we iterate supposing the worst case as the max element has frequency of 1
    }
    return 0;
}

// tc = o(nlogm+n/2+1)
// sc = o(n/2+1)

// better solution-3

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
        unordered_map<int, int> mp;
        for (auto &it : v)
            mp[it]++; // o(n*1) in best case and o(n^2) in worst case;
        for (auto &it : mp)
        {
            if (it.second < 2)
            {
                cout << it.first << endl;
                break;
            }
        }
        // o(n/2+1) max elements present in map throughout which we iterate supposing the worst case as the max element has frequency of 1
    }
    return 0;
}

// tc = o(n+n/2+1)
// sc = o(n/2+1)

// Optimal Solution
// Since we discussed in previous problems as xor of two equal numbers will cancel out each other so every number in pairs will cancel out each oher and we will be left with the number which is having frequency of 1 which is our required ans ...

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
        int xor1 = 0;
        for (auto &it : v)
        {
            xor1 = xor1 ^ it;
        }
        cout << xor1 << endl;
    }
    return 0;
}

// t.c.== o(n)
// s.c == o(1) as we haven't used any extra space
