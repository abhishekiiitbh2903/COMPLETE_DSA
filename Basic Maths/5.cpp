#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
    int a , b ;
    cin>>a>>b;
    int gcd=__gcd(a,b);
    int lcm=(a*b)/gcd;
    cout<<lcm;
}
return 0;
}