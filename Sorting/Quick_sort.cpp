#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int piCalculator(vector<int>& v , int low , int high){
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(v[i]<=pivot && i<=high-1){
            i++;
        }
        while(v[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[j],v[low]);
    return j;
}
void quickSort(vector<int>& v , int low , int high){
    if(low<high){
        int partitionIndex=piCalculator(v,low,high);
        quickSort(v,low,partitionIndex-1);
        quickSort(v,partitionIndex+1,high);
    }
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    quickSort(v,0,n-1);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}

// For sorting in Descending Manner 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int piCalculator(vector<int>& v , int low , int high){
//     int pivot=v[low];
//     int i=low;
//     int j=high;
//     while(i<j){
//         while(v[i]>pivot && i<=high-1){
//             i++;
//         }
//         while(v[j]<=pivot && j>=low+1){
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
// signed main(){
// int t;
// cin>>t;
// while(t--){
//     int n ;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &i:v) cin>>i;
//     quickSort(v,0,n-1);
//     for(auto &it:v) cout<<it<<" ";
//     cout<<endl;
// }
// return 0;
// }