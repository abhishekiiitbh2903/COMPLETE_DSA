// Let's code the bruteforce
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ,m;
cin>>n>>m;
vector<int>v1(n);
vector<int>v2(m);
for(auto &it:v1) cin>>it;
for(auto &it:v2) cin>>it;
set<int>st;
for(auto &it:v1) st.insert(it); //nlogn (logn is size of set)
for(auto &it:v2) st.insert(it); //mlogn (logn is size of set)
vector<int>result;
for(auto &it:st){
  result.push_back(it); //o(n+m)
}
for(auto &i:result) cout<<i<<" ";
cout<<endl;
}
return 0;
}

// total tc =O(nlogn+mlogn+n+m)
// sc=o(n+m)

// let's optimise it using two pointer technique

#include <bits/stdc++.h>
using namespace std;
#define long long int int;
vector<int> Solve(vector<int> &v1, vector<int> &v2, int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] <= v2[j])
        {
            if (ans.size() == 0 || ans.back() != v1[i])
            {
                ans.emplace_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != v2[j])
            {
                ans.emplace_back(v2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (ans.size() == 0 || ans.back() != v1[i])
        {
            ans.emplace_back(v1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (ans.size() == 0 || ans.back() != v2[j])
        {
            ans.emplace_back(v2[j]);
        }
        j++;
    }
    return ans;
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

// tc : o(n1+n2)
// sc:o(n1+n2)