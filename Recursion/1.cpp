#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int ct =0;
void f(){
    if(ct==3) return;
    cout<<ct<<endl;
    ct++;
    f();
}
signed main(){
int t;
cin>>t;
while(t--){
f();
}
return 0;
}