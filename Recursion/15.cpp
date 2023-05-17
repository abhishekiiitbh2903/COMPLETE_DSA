// Reverse String 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void f(int i ,vector<char>& s, int n ){
    if(i>=n/2) return ;
    swap(s[i],s[n-i-1]);
    f(i+1,s,n);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<char>s(n);
    for(auto &i:s) cin>>i;
    f(0,s,n);
    for(auto it:s) cout<<it<<" ";
}
return 0;
}