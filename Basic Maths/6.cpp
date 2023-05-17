#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printDivisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i) cout<<n/i<<" ";
        }
    }
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    printDivisors(n);
}
return 0;
}