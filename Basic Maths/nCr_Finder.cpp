#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int CombinatorCalculator(int n , int r ){
    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,r ;
cin>>n>>r;
int  ans =CombinatorCalculator(n,r);
cout<<ans<<endl;
}
return 0;
}