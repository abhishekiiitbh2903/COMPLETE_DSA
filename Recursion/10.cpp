#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int sum(int i){
    if(i==0) return 0;
     return i+sum(i-1);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    cout<<sum(n)<<endl;
}
return 0;
}