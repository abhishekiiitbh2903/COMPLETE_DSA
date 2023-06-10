// Given the array we will have to tell the possible pairs such that arr[i]>2*arr[j] provided i>j
// Brute Force
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int reversePairs(vector<int> &v , int n){
// int cnt=0;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//       if(v[i]>2*v[j]) cnt++;
//     }
// }
// return cnt;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// cout<<reversePairs(v,n)<<endl;

// }
// return 0;
// }

// Time Complexity ==> o(n^2)
// Space Complexity ==> o(1)

// let's move to the better solution and for that we will use merge sort technique 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// int cnt=0;
// void merge(vector<int> &v,int low ,int mid, int high){
//     vector<int>temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid&&right<=high){
//         if(v[left]<=v[right]){
//             temp.emplace_back(v[left]);
//             left++;
//         }
//         else{
//             temp.emplace_back(v[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//          temp.emplace_back(v[left]);
//             left++;
//     }
//     while(right<=high){
//         temp.emplace_back(v[right]);
//             right++;
//     }
//     for(int i=low;i<=high;i++){
//         v[i]=temp[i-low];
//     }
// }
// void countPairs(vector<int> &v, int low ,int mid ,int high){
// int right=mid+1;
// for(int i=low;i<=mid;i++){
//     while(right<=high && v[i]>2*v[right]) right++;
//     cnt+=(right-(mid+1));
// }

// }
// void mergeSort(vector<int> &v,int low , int high){
//     if(low>=high) return;
//     int mid=low+(high-low)/2;// Avoiding Overflow 
//     mergeSort(v,low,mid);
//     mergeSort(v,mid+1,high);
//     countPairs(v,low,mid,high);
//     merge(v,low,mid,high);
// }
// int reversePairs(vector<int> &v , int n){
// mergeSort(v,0,n-1);
// return cnt ;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// cout<<reversePairs(v,n)<<endl;

// }
// return 0;
// }

// using global variables is highly discouraged in interviews so we will not use that 

// Most Optimal Solution

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void merge(vector<int> &v,int low ,int mid, int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(v[left]<=v[right]){
            temp.emplace_back(v[left]);
            left++;
        }
        else{
            temp.emplace_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.emplace_back(v[left]);
            left++;
    }
    while(right<=high){
        temp.emplace_back(v[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}
int countPairs(vector<int> &v, int low ,int mid ,int high){
int cnt=0;
int right=mid+1;
for(int i=low;i<=mid;i++){
    while(right<=high && v[i]>2*v[right]) right++;
    cnt+=(right-(mid+1));
}
return cnt;
}
int mergeSort(vector<int> &v,int low , int high){
    int cnt=0;
    if(low>=high) return cnt;;
    int mid=low+(high-low)/2;// Avoiding Overflow 
    cnt+=mergeSort(v,low,mid);
    cnt+=mergeSort(v,mid+1,high);
    cnt+=countPairs(v,low,mid,high);
    merge(v,low,mid,high);
    return cnt;
}
int reversePairs(vector<int> &v , int n){
mergeSort(v,0,n-1);
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
cout<<reversePairs(v,n)<<endl;
}
return 0;
}