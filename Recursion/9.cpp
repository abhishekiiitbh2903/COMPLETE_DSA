#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void sum(int i , int n ){
    if(i<1){
        cout<<n<<endl;
        return;
    }
    sum(i-1,n+i);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    sum(n,0);
}
return 0;
}