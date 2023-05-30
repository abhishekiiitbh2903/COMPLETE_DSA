#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int sum=0;
int maxi=INT_MIN;
int start=-1;
int ansStart=-1;
int ansEnd=-1;
for(int i=0;i<n;i++){
    if(sum==0) start=i;
    sum+=v[i];
   if(sum>maxi){
    ansStart=start;
    ansEnd=i;
   }
   if(sum<0) sum=0;
}
for(int i=ansStart;i<ansEnd;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
return 0;
}

// tc= o(n)+o(ansEnd-ansStart) ~= 0(2n)
//sc=o(1) no extra space 
