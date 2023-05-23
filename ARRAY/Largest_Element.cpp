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
// int largest_element(vector<int>&v ,int n ){
//     quickSort(v,0,n-1);
//     return v[n-1];
// }
//  signed main(){
// int t;
// cin>>t;
// while(t--){
//     int n; 
//     cin>>n;
//     vector<int>v(n);
//     for(auto &i:v) cin>>i;
//    int ans =largest_element(v,n);
//    cout<<ans<<endl;
// }
// return 0;
// }


// above written approach is brute force approach . 
// T.C.= O(nlogn) S.C.=O(1)


#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int largest_element(vector<int>&v ,int n ){
    int largest =v[0];
  for(int i=1;i<n;i++){
    if(v[i]>largest){
        largest=v[i];
    }
  }
  return largest;
}
 signed main(){
int t;
cin>>t;
while(t--){
    int n; 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
   int ans =largest_element(v,n);
   cout<<ans<<endl;
}
return 0;
}