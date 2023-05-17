// print n-1 using recursion 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printN(int i , int n){
    if(i<1) return;
    cout<<i<<endl;
    printN(i-1,n);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; cin>>n;
    printN(n,n);
}
return 0;
}