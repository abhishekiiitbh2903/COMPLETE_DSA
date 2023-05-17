#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int print (int n ){
    if(n<=1) return n ;
    int last=print(n-1);
    int second_last=print(n-2);
    return last+second_last;
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    cout<<print(n);
}
return 0;
}