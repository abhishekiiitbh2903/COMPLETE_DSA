// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int piCalculator(vector<int>& v , int low , int high){
//     int pivot=v[low];
//     int i=low;
//     int j=high;
//     while(i<j){
//         while(v[i]<=pivot && i<=high-1){
//             i++;
//         }
//         while(v[j]>pivot && j>=low+1){
//             j--;
//         }
//         if(i<j) swap(v[i],v[j]);
//     }
//     swap(v[j],v[low]);
//     return j;
// }
// void quickSort(vector<int>& v , int low , int high){
//     if(low<high){
//         int partitionIndex=piCalculator(v,low,high);
//         quickSort(v,low,partitionIndex-1);
//         quickSort(v,partitionIndex+1,high);
//     }
// }
// int secondLargest_element(vector<int> &v, int n){
//   quickSort(v,0,n-1);
//   int largest =v[n-1];
//   // Since we can have duplicacy so we can't directly state that v[n-2] will be second largest like 1 2 4 5 7 7
//   // let's iterate to find the second largest
//   int second_largest=-1;
//   for(int i=n-2;i>=0;i--){
//     if(v[i]!=largest){
//          second_largest = v[i];
//          break;
//   }
//   }
//   return second_largest;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &i:v) cin>>i;
//    int ans =secondLargest_element(v,n);
//    cout<<ans<<endl;
// }
// return 0;
// }

// the very basic brute force having time complexity of o(nlogn+n) nlogn for sorting and  n for looping which can effectively be termed as nlogn s.c is constant space

// let's move to approach 2

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int secondLargest_element(vector<int> &v, int n){
//     int largest = v[0];
//     for(int i=1;i<n;i++){
//      if(v[i]>largest) largest=v[i];
//     }
//     int second_largest=-1;
//     for(int i=0;i<n;i++){
//         if(v[i]>second_largest && v[i]!=largest){
//             second_largest=v[i];
//         }
//     }
//     return second_largest;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &i:v) cin>>i;
//    int ans =secondLargest_element(v,n);
//    cout<<ans<<endl;
// }
// return 0;
// }

// The above approach is having time complexity of O(n+n) n each for finding largest and second largest respectively which can be effectively termed as n . sc is constant space .

// Optimal Approach

// Intuition : We will iterate through entire vector all in once in order to avoid extra time for iterating vector twice for finding largest and second largest

#include <bits/stdc++.h>
using namespace std;
#define long long int int;
int secondLargest_element(vector<int> &v, int n)
{
    int largest = v[0];
    int second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > largest)
        {
            second_largest = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] > second_largest)
        {
            second_largest = v[i];
        }
    }
    return second_largest;
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
        int ans = secondLargest_element(v, n);
        cout << ans << endl;
    }
    return 0;
}

// T.C = O(n) as we are iterating only once throught vector in order to find second_largest and largest and as usual constant space 