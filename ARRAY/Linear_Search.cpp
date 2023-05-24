#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
bool Search(vector<int>&v , int n , int key){
for(auto &it:v){
    if(it==key) return true;
}
return false ;
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
bool ans =Search(v,n,7);
(ans==1)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
}
return 0;
}