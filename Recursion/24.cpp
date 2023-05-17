// Subset Sum : Sum of all Subsets
// Problem Statement: Given an array print all the sum of the subset generated from it, in the increasing order.

// Examples:

// Example 1:

// Input: N = 3, arr[] = {5,2,1}

// Output: 0,1,2,3,5,6,7,8

// Explanation: We have to find all the subset’s sum and print them.in this case the generated subsets are [ [], [1], [2], [2,1], [5], [5,1], [5,2]. [5,2,1],so the sums we get will be  0,1,2,3,5,6,7,8


// Input: N=3,arr[]= {3,1,2}

// Output: 0,1,2,3,3,4,5,6

// Explanation: We have to find all the subset’s sum and print them.in this case the generated subsets are [ [], [1], [2], [2,1], [3], [3,1], [3,2]. [3,2,1],so the sums we get will be  0,1,2,3,3,4,5,6



#include<bits/stdc++.h>
using namespace std;
    void subsetSumsHelper(int ind, vector < int > & arr, int n, vector < int > & ans, int sum,int total_sum) {
      if (ind == n) {
        ans.push_back(abs(total_sum-(2*sum)));
        return;
      }
      //element is picked
      subsetSumsHelper(ind + 1, arr, n, ans, sum + arr[ind],total_sum);
      //element is not picked
      subsetSumsHelper(ind + 1, arr, n, ans, sum,total_sum);
    }
  vector < int > minSubsetSumDifference(vector < int > &arr, int n) {
    vector < int > ans;
    int total_sum=accumulate(arr.begin(),arr.end(),0);
    subsetSumsHelper(0, arr, n, ans, 0,total_sum);
    return ans;
  }

int main() {
  int t ;
  cin>>t;
  while(t--){
    int n ;
    cin>>n;
   vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector < int > ans = minSubsetSumDifference(arr,n);
  cout<<*min_element(begin(ans),end(ans));
  cout << endl;
  }
  return 0;
}