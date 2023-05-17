#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void pattern(int n ){
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    pattern(n);
}
return 0;
}