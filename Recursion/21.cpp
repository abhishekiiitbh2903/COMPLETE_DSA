// Time Complexity=2^n;
//Space Complexity=n
// count number of  SubSequence whose sum is equal to k ,here k==2.
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int CountAllSubSequences(int i,vector<int>&v,int n , int sum ){
if(i>=n){
   return (sum==2)?1:0;
}
sum+=v[i];
int l=CountAllSubSequences(i+1,v,n,sum) ;
sum-=v[i];
int r=CountAllSubSequences(i+1,v,n,sum);
return l+r ;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ; 
cin>>n;
vector<int>v(n);
for(auto &i:v) cin>>i;
cout<<CountAllSubSequences(0,v,n,0);
}
return 0;
}