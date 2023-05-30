// Missing Number
// Brute Force Approach
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
        for (int i = 1; i <= n; i++)
        {
            bool flag = false;
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j] == i)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
                cout << i;
            cout << endl;
        }
    }
    return 0;
}

// Since there are two nested for loops so o(n^2) as for every it iterates over entire vector to check whether it exits or not
// No extra Space so o(1)

// Better Approach

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
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            hash[v[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] == 0)
                cout << i << endl;
        }
    }
    return 0;
}

// tc = o(n-1+n-1)==>o(2n-2)
// since we are using extra hash array in order to store frequency of elements occuring so o(n)

// Optimal Solution 1
// Using Summation

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
        int sum = (n * (n + 1)) / 2; // Formula to calculate summation of n natural numbers
        int sum1 = 0;
        for (auto &it : v)
            sum1 += it;
        cout << sum - sum1 << endl;
    }
    return 0;
}

// tc : o(n) this is tc to calculate value of sum1
// sc - no extra space
// We can further optimise it as while calculating value of sum if we would be having higher value of n i.e. in the range of 1o^5 then it can be around 10^10 which will overflow so we will have to use long long datatype which increases the tc a bit so let's optimise it further using concept of xor as xor of two equal number equates to 0.

// Optimal Solution--2
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
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            xor2 = xor2 ^ v[i];
            xor1 = xor1 ^ (i + 1);
        }
        xor1 = xor1 ^ n;
        int ans = xor1 ^ xor2;
        cout << ans << endl;
    }
    return 0;
}

// tc ->o(n)
// no extra space so o(1)
// The max answer if in case large value for n can be at max n only wherein case of it's power used to get double which was causing overflow
