// Combination Sum II – Find all unique combinations
// In this article we will solve the most asked interview question “Combination Sum II – Find all unique combinations”.

// Problem Statement: Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target. Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

// Examples:

// Example 1:

// Input: candidates = [10,1,2,7,6,1,5], target = 8

// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]]


// Explanation: These are the unique combinations whose sum is equal to target.
 
// Example 2:

// Input: candidates = [2,5,2,1,2], target = 5

// Output: [[1,2,2],[5]]

// Explanation: These are the unique combinations whose sum is equal to target.

// BRUTE FORCE 
// #include<bits/stdc++.h>

// using namespace std;
// class Solution {
//   public:
//     void findCombination(int ind, int target, vector < int > & arr, set< vector < int >> & ans, vector < int > & ds) {
//       if (ind == arr.size()) {
//         if (target == 0) {
//           ans.insert(ds);
//         }
//         return;
//       }
//       // pick up the element 
//       if (arr[ind] <= target) {
//         ds.push_back(arr[ind]);
//         findCombination(ind+1, target - arr[ind], arr, ans, ds);
//         ds.pop_back();
//       }

//       findCombination(ind + 1, target, arr, ans, ds);

//     }
//   public:
//     vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
//       set< vector < int >> ans;
//       vector< vector < int >> ans1;
//       vector < int > ds;
//       sort(candidates.begin(),candidates.end());
//       findCombination(0, target, candidates, ans, ds);
//       for(auto it :ans) ans1.emplace_back(it);
//       return ans1;
//     }
// };
// int main(){
//   Solution obj;
//   vector < int > v {10,1,2,7,6,1,5};
//   int target = 8;

//   vector < vector < int >> ans1 = obj.combinationSum(v, target);
//   cout << "Combinations are: " << endl;
//   for (int i = 0; i < ans1.size(); i++) {
//     for (int j = 0; j < ans1[i].size(); j++)
//       cout << ans1[i][j] << " ";
//     cout << endl;
//   }
// }

// optimised Approach
#include<bits/stdc++.h>

using namespace std;
void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if (arr[i] > target) break;
    ds.push_back(arr[i]);
    findCombination(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
}
vector < vector < int >> combinationSum2(vector < int > & candidates, int target) {
  sort(candidates.begin(), candidates.end());
  vector < vector < int >> ans;
  vector < int > ds;
  findCombination(0, target, candidates, ans, ds);
  return ans;
}
int main() {
  vector<int> v{10,1,2,7,6,1,5};
  vector < vector < int >> comb = combinationSum2(v, 8);
  cout << "[ ";
  for (int i = 0; i < comb.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < comb[i].size(); j++) {
      cout << comb[i][j] << " ";
    }
    cout << "]";
  }
  cout << " ]";
}
