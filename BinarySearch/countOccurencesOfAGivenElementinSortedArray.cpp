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
cout<<0<<endl;
flag=true;
} 
if(!flag){
int last=lastOccurence(v,n,target);
cout<<last-first+1<<endl;
}
}
return 0;
}