// Subset – II | Print all the Unique Subsets
// Problem Statement: Given an array of integers that may contain duplicates the task is to return all possible subsets. Return only unique subsets and they can be in any order.

// Examples:

// Example 1:

// Input: array[] = [1,2,2]

// Output: [ [ ],[1],[1,2],[1,2,2],[2],[2,2] ]

// Explanation: We can have subsets ranging from  length 0 to 3. which are listed above. Also the subset [1,2] appears twice but is printed only once as we require only unique subsets.

// Input: array[] = [1]

// Output: [ [ ], [1] ]

// Explanation: Only two unique subsets are available

// #include <bits/stdc++.h>

// using namespace std;
// void printAns(vector < vector < int >> & ans) {
//   cout << "The unique subsets are " << endl;
//   cout << "[ ";
//   for (int i = 0; i < ans.size(); i++) {
//     cout << "[ ";
//     for (int j = 0; j < ans[i].size(); j++)
//       cout << ans[i][j] << " ";
//     cout << "]";
//   }
//   cout << " ]";
// }
// class Solution {
//   public:
//     void fun(vector < int > & nums, int index, vector < int > ds, set < vector < int >> & res) {
//       if (index == nums.size()) {
//         sort(ds.begin(), ds.end());
//         res.insert(ds);
//         return;
//       }
//       ds.push_back(nums[index]);
//       fun(nums, index + 1, ds, res);
//       ds.pop_back();
//       fun(nums, index + 1, ds, res);
//     }
//   vector < vector < int >> subsetsWithDup(vector < int > & nums) {
//     vector < vector < int >> ans;
//     set < vector < int >> res;
//     vector < int > ds;
//     fun(nums, 0, ds, res);
//     for (auto it = res.begin(); it != res.end(); it++) {
//       ans.push_back( * it);
//     }
//     return ans;
//   }
// };
// int main() {
//   Solution obj;
//   vector < int > nums = {1, 2, 2};
//   vector < vector < int >> ans = obj.subsetsWithDup(nums);
//   printAns(ans);
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void printAns(vector < vector < int >> & ans) {
//    cout<<"The unique subsets are "<<endl;
//    cout << "[ ";
//    for (int i = 0; i < ans.size(); i++) {
//       cout << "[ ";
//       for (int j = 0; j < ans[i].size(); j++)
//          cout << ans[i][j] << " ";
//       cout << "]";
//    }
//    cout << " ]";
// }
// class Solution {
//    private:
//       void findSubsets(int ind, vector < int > & nums, vector < int > & ds, vector < vector < int >> & ans) {
//          ans.push_back(ds);
//          for (int i = ind; i < nums.size(); i++) {
//             if (i != ind && nums[i] == nums[i - 1]) continue;
//             ds.push_back(nums[i]);
//             findSubsets(i + 1, nums, ds, ans);
//             ds.pop_back();
//          }
//       }
//    public:
//       vector < vector < int >> subsetsWithDup(vector < int > & nums) {
//          vector < vector < int >> ans;
//          vector < int > ds;
//          sort(nums.begin(), nums.end());
//          findSubsets(0, nums, ds, ans);
//          return ans;
//       }
// };
// int main() {
//    Solution obj;
//    vector < int > nums = {1,2,2 };
//    vector < vector < int >> ans = obj.subsetsWithDup(nums);
//    printAns(ans);
//    return 0;
// }