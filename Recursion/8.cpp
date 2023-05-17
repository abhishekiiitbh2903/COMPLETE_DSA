// no need to use recursion...
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void sum(int i , int n ,int x){
    if(i>x){
        cout<<n<<endl;
        return;
    }
    sum(i+1,n+i,x);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    sum(1,0,n);
}
return 0;
}