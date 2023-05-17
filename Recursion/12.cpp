#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void fact(int i , int n){
    if(i<1){
        cout<<n<<endl;
        return;
    }
    fact(i-1,n*i);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    fact(n,1);
}
return 0;
}