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
void mergeSort(vector<int> &v,int low , int high){
    if(low>=high) return;
    int mid=low+(high-low)/2;// Avoiding Overflow 
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    merge(v,low,mid,high);
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &i:v) cin>>i;
mergeSort(v,0,n-1);
for(auto &it :v) cout<<it<<" ";
cout<<endl;
}
return 0;
}