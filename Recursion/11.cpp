#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void fact(int i , int n ,int x){
    if(i>x){
        cout<<n<<endl;
        return;
    }
    fact(i+1,n*i,x);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    fact(1,1,n);
}
return 0;
}