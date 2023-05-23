#include <bits/stdc++.h>
using namespace std;
#define long long int int;
int secondSmallest_element(vector<int> &v, int n)
{
    int smallest = v[0];
    int second_smallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < smallest)
        {
            second_smallest = smallest;
            smallest = v[i];
        }
        else if (v[i] > smallest && v[i] < second_smallest)
        {
            second_smallest = v[i];
        }
    }
    return second_smallest;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int ans = secondSmallest_element(v, n);
        cout << ans << endl;
    }
    return 0;
}

// T.C = O(n) as we are iterating only once throught vector in order to find second_largest and largest and as usual constant space 