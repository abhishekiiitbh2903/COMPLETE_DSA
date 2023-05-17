#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int factorial(int i){
    if(i==0) return 1;
     return i*factorial(i-1);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    cout<<factorial(n)<<endl;
}
return 0;
}