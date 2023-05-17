#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void gcd(int a , int b){
    while(a>0&&b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    a==0?cout<<b<<endl:cout<<a<<endl;
}
signed main(){
int t;
cin>>t;
while(t--){
    int a ,  b;
    cin>>a>>b;
    gcd(a,b);
    cout<<__gcd(a,b);
}
return 0;
}