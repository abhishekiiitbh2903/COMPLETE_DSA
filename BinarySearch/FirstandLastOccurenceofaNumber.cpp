// Given an Array and an element we will have to return the index of the first and last occurence of that element 
// Brute Force 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int first =-1,last=-1;
// for(int i=0 ; i<n;i++){
//     if(v[i]==target){
//         if(first==-1) first =i;
//         last=i;
//     }
// }
// cout<<first<<" "<<last<<endl;
// }
// return 0;
// }

// Time Complexity ===>0(n)

// Solving using lower_bound and upper_bound of binary Search


// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ,target;
// cin>>n>>target;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int lb=lower_bound(begin(v),end(v),target)-begin(v);
// int ub=upper_bound(begin(v),end(v),target)-begin(v);
// // Edge cases what if element is not present and lb points to other element and in extreme cases it points to n 
// if(v[lb]!=target||lb==n) cout<<-1<<" "<<-1<<endl;
// else cout<<lb<<" "<<ub-1<<endl;
// }
// return 0;
// }

// T.C==>o(2*logN)

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int firstOccurence(vector<int>& v , int n , int target){
int low =0;
int high=n-1;
int ans =-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]==target){
     ans =mid ;
     high=mid-1;
    }
    else if(v[mid]>target){
      high=mid-1;  
    }
    else low =mid+1;
}
return ans ;
}
int lastOccurence(vector<int>& v , int n , int target){
int low =0;
int high=n-1;
int ans =n;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]==target){
     ans =mid ;
     low=mid+1;
    }
    else if(v[mid]>target){
      high=mid-1;  
    }
    else low =mid+1;
}
return ans ;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,target ;
cin>>n>>target;
vector<int>v(n);
for(auto &it:v) cin>>it;
bool flag =false;
int first=firstOccurence(v,n,target);
if(first==-1){
cout<<-1<<" "<<-1<<endl;
flag=true;
} 
if(!flag){
int last=lastOccurence(v,n,target);
cout<<first<<" "<<last<<endl;
}
}
return 0;
}