// print name n times using a kind of backtracking
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printN(int i , int n){
    if(i<1) return;
    printN(i-1,n);
    cout<<i<<endl;
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